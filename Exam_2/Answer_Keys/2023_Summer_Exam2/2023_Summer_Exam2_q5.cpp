#include <iostream>

int findOddIntegersAndSum(int S[], int length, int& sumOdds) {
  int elem = S[length - 1];

  if (length == 1) {
    if (elem % 2 != 0) {
      sumOdds += elem;
      return 1;
    }
    return 0;
  }
  else {
    int parity = 0;
    if (elem % 2 != 0) {
      sumOdds += elem;
      parity = 1;
    }
    return parity + findOddIntegersAndSum(S, length - 1, sumOdds);
  }
}

void print_output(int S[], int length) {
  int sumOdds = 0;
  int res = findOddIntegersAndSum(S, length, sumOdds);
  std::cout<<"["<<S[0];
  for (int idx = 1; idx < length; idx++)
    std::cout<<", "<<S[idx];
  std::cout<<"]"<<std::endl;

  std::cout<<"total count of odd integers: "<<res<<std::endl;
  std::cout<<"total summation of odd integers: "<<sumOdds<<std::endl;
  std::cout<<std::endl;
}

int main() {
  int S1[] = {10, -5, -20, 0, 7, -15, -5, -100};
  int length1 = sizeof(S1) / sizeof(S1[0]);
  print_output(S1, length1);

  int S2[] = {-1, -5, -70, -15, -26, -44, 0, 25, -14, -3};
  int length2 = sizeof(S2) / sizeof(S2[0]);
  print_output(S2, length2);

  int S3[] = {9, 0, 13, 17, 29, -14, -60, 9, -9};
  int length3 = sizeof(S3) / sizeof(S3[0]);
  print_output(S3, length3);

  int S4[] = {1, 5, 20, 0, -40};
  int length4 = sizeof(S4) / sizeof(S4[0]);
  print_output(S4, length4);

  return 0;
}
