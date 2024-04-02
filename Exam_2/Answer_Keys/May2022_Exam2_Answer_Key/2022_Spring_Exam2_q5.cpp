#include <iostream>

bool isSorted(int S[], int length) {
  int elem1, elem2;

  if (length <= 2) {
    if (length <= 1)
      return true;
    else {
      elem1 = S[length - 1];
      elem2 = S[length - 2];
      return (elem1 <= elem2);
    }
  }
  else {
    elem1 = S[length - 1];
    elem2 = S[length - 2];
    if (elem1 <= elem2)
      return isSorted(S, length - 1);
    else
      return false;
  }
}

void printRes(int arr[], int arrSize, bool res) {
  std::cout<<"["<<arr[0];
  for (int idx = 1; idx < arrSize; idx++)
    std::cout<<" "<<arr[idx];
  std::cout<<"]"<<std::endl;

  if (res)
    std::cout<<"The array is sorted!"<<std::endl;
  else
    std::cout<<"The array is not sorted"<<std::endl;
  
  std::cout<<std::endl;
}

int main() {
  int S1[] = {100, 75, 27, 15, 8, -5, -5, -10};
  int length1 = sizeof(S1) / sizeof(S1[0]);
  printRes(S1, length1, isSorted(S1, length1));

  int S2[] = {-1, -5, -7, -15, -26, -44, 0, 5, -1, -3};
  int length2 = sizeof(S2) / sizeof(S2[0]);
  printRes(S2, length2, isSorted(S2, length2));

  int S3[] = {1, 15, 81, 199, 300, 400};
  int length3 = sizeof(S3) / sizeof(S3[0]);
  printRes(S3, length3, isSorted(S3, length3));

  int S4[] = {69, 50, 33, 25, 23, 14, 5, 3, 0, -7, -9};
  int length4 = sizeof(S4) / sizeof(S4[0]);
  printRes(S4, length4, isSorted(S4, length4));

  return 0;
}
