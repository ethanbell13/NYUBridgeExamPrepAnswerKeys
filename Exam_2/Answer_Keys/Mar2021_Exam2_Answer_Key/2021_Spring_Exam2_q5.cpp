#include <iostream>
#include <vector>
#include <string>

void split_input(std::string input, std::vector<int>& vec1, std::vector<int>& vec2, int& highest_grade) {
  int str_len = input.length();
  int cursor = 0, sp1 = 0, sp2 = 0;
  int elem;
  for (int idx = 0; idx < str_len; idx++) {
    elem = input[idx];
    if (elem == ' ') {
      if (!sp1) {
        sp1 = idx;
      }
      sp2 = idx;
    }
  }

  int word1 = std::stoi(input.substr(0, sp1));
  int word2 = std::stoi(input.substr(sp2 + 1, str_len));

  if (word2 > highest_grade)
    highest_grade = word2;

  vec1.push_back(word1);
  vec2.push_back(word2);
}

void print_results(std::vector<int> student_ids, std::vector<int> grades, int highest_grade) {
  std::cout<<"The highest grade is "<<highest_grade<<std::endl;
  std::cout<<"The students with the grade "<<highest_grade<<" are:";
  for (int idx = 0; idx < student_ids.size(); idx++) {
    if (grades[idx] == highest_grade)
      std::cout<<" "<<student_ids[idx];
  }
  std::cout<<"."<<std::endl;
}

int main() {
  std::cout<<"Please enter a non-empty sequence of lines.\n"
  <<"Each line should have a student ID and their grade (0-100),\n"
  <<"separated by a space.\n"
  <<"To indicate the end of the input, enter -1 as a student ID:"<<std::endl;

  int highest_grade = 0;
  int student_id, grade;
  std::vector<int> student_ids, grades;
  std::string input;
  while (true) {
    std::getline(std::cin, input);
    if (input == "-1")
      break;
    split_input(input, student_ids, grades, highest_grade);
  }

  print_results(student_ids, grades, highest_grade);

  return 0;
}
