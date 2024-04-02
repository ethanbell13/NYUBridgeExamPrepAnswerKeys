#include <iostream>

bool isPalindrome(int seq[], int seqSize) {
  int start = 0, end = seqSize - 1;

  if (seqSize <= 1)
    return true;
  else if (seq[start] == seq[end])
    return isPalindrome(seq + 1, seqSize - 2);
  else
    return false;
}

int main() {
  int seq[] = {3, 12, 4, 4, 12, 3};
  int seqSize = sizeof(seq) / sizeof(seq[0]);

  bool res = isPalindrome(seq, seqSize);
  if (res)
    std::cout<<"array is a palindrome"<<std::endl;
  else
    std::cout<<"array is not a palindrome"<<std::endl;

  return 0;
}
