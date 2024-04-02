#include <iostream>
#include <string>
#include <vector>

const int ASCII_CEIL = 57;
const int ASCII_FLR = 48;

void parse_input(std::string input, std::string container, char elem, int& num_empty, std::vector<std::string>& string_bin) {
  container = "";
  for (int idx = 0; idx < input.length(); idx++) {
    elem = input[idx];
    if (elem >= ASCII_FLR && elem <= ASCII_CEIL)
      container += elem;
  }

  if (container.length())
    string_bin.push_back(container);
  else
    num_empty++;
}

void print_output(int num_empty, std::vector<std::string> string_bin) {
  for (std::string item:string_bin)
    std::cout<<item<<std::endl;
  
  std::cout<<"Number of Strings in the input sequence wich contain no numeric\n"
  <<"characters: "<<num_empty<<std::endl;
}

int main() {
  std::cout<<"Please enter a non-empty sequence of Strings. Each string should\n"
  <<"be in a separate line and consist of only alphanumeric\n"
  <<"characters. To indicate the end of the input, enter an empty\n"
  <<"string in one line."<<std::endl;

  int num_empty = 0;
  char elem;
  std::string input, container; 
  std::vector<std::string> string_bin;
  while (true) {
    std::getline(std::cin, input);
    if (input == "")
      break;
    parse_input(input, container, elem, num_empty, string_bin);
  }

  print_output(num_empty, string_bin);

  return 0;
}
