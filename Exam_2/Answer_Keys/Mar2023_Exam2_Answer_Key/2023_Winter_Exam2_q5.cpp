#include <iostream>
#include <string>

int countConsonants(std::string s, int length);
char toLower(char c);
int main()
{
  using namespace std;
  string input;
  cout << "Please enter a string:\n";
  getline(cin, input);
  cout << '\"' << input << "\" has " << countConsonants(input, input.length()) << " consonants." << endl;
  return 0;
}
int countConsonants(std::string s, int length)
{
  char c;
  if (length == 1)
  {
    c = toLower(s[length - 1]);
    if ('a' <= c && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
      return 1;
    return 0;
  }
  else
    return countConsonants(s.substr(length - 1, 1), 1) + countConsonants(s.substr(0, length - 1), length - 1);
}
char toLower(char c)
{
  int difference = 'a' - 'A';
  if ('A' <= c && c <= 'Z')
    return c + difference;
  return c;
}