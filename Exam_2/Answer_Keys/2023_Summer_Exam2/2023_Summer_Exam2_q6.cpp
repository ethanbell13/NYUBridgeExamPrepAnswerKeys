#include <iostream>
#include <string>
#include <vector>

const int ASCII_FLR = 51;

bool is_valid(std::string input) {
  int elem;
  for (int idx = 0; idx < input.length(); idx++) {
    elem = input[idx];
    if (elem >= ASCII_FLR)
      return false;
  }
  return true;
}

void parse_input(std::string input, int &num_invalid, std::vector<std::string> &string_bin) {
  if (is_valid(input))
    string_bin.push_back(input);
  else
    num_invalid++;
}

void print_output(int num_invalid, std::vector<std::string> string_bin) {
  for (std::string elem:string_bin)
    std::cout<<elem<<std::endl;

  std::cout<<"Number of Strings in which the input sequence that got deleted for containing\n"
  <<"at least one character which is not 0 or 1: "<<num_invalid<<std::endl;
}

int main() {
  std::cout<<"Please enter a non-empty sequence of strings. Each string should\n"
  <<"be in a separate line and consist of only decimal digit\n"
  <<"characters. To indicate the end of the input, enter an empty\n"
  <<"string in one line."<<std::endl;

  int num_invalid = 0;
  std::string input;
  std::vector<std::string> string_bin;
  while (true) {
    std::getline(std::cin, input);
    if (input == "")
      break;
    
    parse_input(input, num_invalid, string_bin);
  }

  print_output(num_invalid, string_bin);

  return 0;
}
