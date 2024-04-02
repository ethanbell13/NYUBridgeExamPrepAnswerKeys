#include <iostream>
#include <string>
#include <vector>

const int ASCII_CEIL = 57;
const int ASCII_FLR = 48;

void parse_input(std::string input, int& letters_only, std::vector<std::string>& string_bin) {
  int elem;
  bool has_number = false;

  for (int idx = 0; idx < input.length(); idx++) {
    elem = input[idx];
    if (elem >= ASCII_FLR && elem <= ASCII_CEIL) {
      has_number = true;
      break;
    }
  }

  if (has_number)
    string_bin.push_back(input);
  else
    letters_only++;
}

void print_output(int letters_only, std::vector<std::string> string_bin) {
  for (std::string elem:string_bin)
    std::cout<<elem<<std::endl;
  
  std::cout<<"Number of Strings in the input sequence that contain only lowercase English letters: "<<letters_only<<std::endl;
}

int main() {
  std::cout<<"Please enter a non-empty sequence of Strings. Each string should\n"
  <<"be in a separate line and consist of only lowercase English\n"
  <<"letters and/or numerical chracters. To indicate the end of the\n"
  <<"input, enter an empty string in one line."<<std::endl;

  int letters_only = 0;
  std::string input;
  std::vector<std::string> string_bin;
  while (true) {
    std::getline(std::cin, input);
    if (input == "")
      break;
    
    parse_input(input, letters_only, string_bin);
  }

  print_output(letters_only, string_bin);

  return 0;
}
