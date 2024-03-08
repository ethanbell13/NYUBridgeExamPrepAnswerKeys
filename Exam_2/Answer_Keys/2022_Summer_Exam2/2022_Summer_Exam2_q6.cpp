#include <iostream>
#include <string>
#include <vector>

const int ASCII_CEIL = 122;
const int ASCII_FLR = 97;

void parse_input(std::string input, int& letter_only, int& num_empty, std::vector<std::string>& string_bin) {
  char elem;
  std::string container = "";
  for (int idx = 0; idx < input.length(); idx++) {
    elem = input[idx];
    if (elem >= ASCII_FLR && elem <= ASCII_CEIL)
      container += elem;
  }

  int container_len = container.length();
  if (container_len) {
    string_bin.push_back(container);
    if (container_len == input.length())
      letter_only++;
  }
  else
    num_empty++;
}

void print_ouput(int letter_only, int num_empty, std::vector<std::string> string_bin) {
  for (std::string elem:string_bin)
    std::cout<<elem<<std::endl;
  
  std::cout<<"Number of Strings in the input sequence that contain only special characters: "<<num_empty<<std::endl;
  std::cout<<"Number of Strings in the input sequence that contain only lowercase English letters: "<<letter_only<<std::endl;
}


int main() {
  std::cout<<"Please enter a non-empty sequence of Strings. Each string should\n"
  <<"be in a separate line and consist of only lowercase English\n"
  <<"letters and/or special characters @, #, $, !, &. To indicate the\n"
  <<"end of the input, enter an empty string in one line."<<std::endl;

  int num_empty = 0, letter_only = 0;
  std::string input;
  std::vector<std::string> string_bin;
  while (true) {
    std::getline(std::cin, input);
    if (input == "")
      break;

    parse_input(input, letter_only, num_empty, string_bin);
  }

  print_ouput(letter_only, num_empty, string_bin);

  return 0;
}
