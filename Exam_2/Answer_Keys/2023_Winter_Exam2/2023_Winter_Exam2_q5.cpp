#include <iostream>
#include <string>

const int ASCII_CEIL = 90;
const int ASCII_OFFST = 'a' - 'A';

char lower(char& letter) {
  if (letter <= ASCII_CEIL)
    return letter + ASCII_OFFST;
  return letter;
}

int countConsonants(std::string S, int length) {
  int sum;
  char elem;

  if (length == 1) {
    elem = lower(S[0]);

    if (elem == 'a' || elem == 'e' || elem == 'i' || elem == 'o' || elem == 'u')
      return 0;
    else
      return 1;
  }
  else {
    elem = lower(S[length - 1]);

    if (elem == 'a' || elem == 'e' || elem == 'i' || elem == 'o' || elem == 'u')
      sum = 0;
    else
      sum = 1;
    
    return sum + countConsonants(S, length - 1);
  }
}

void print_output(std::string S) {
  std::cout<<S<<" has "<<countConsonants(S, S.length())<<" consonants"<<"\n"<<std::endl;
}

int main() {
  print_output("CSBridge");
  print_output("todayissunny");
  print_output("PathwaytoCSTandonMS");

  //for me this worked before I implemented the lower function, meaning that countConsonants didn't care if the letter was lower or uppercase. 
  //I don't understand why it worked so I implemented the lower function just to be safe

  return 0;
}
