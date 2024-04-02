#include <iostream>

void printArray(int arr[], int arrSize) {
  int i;
  for (i = 0; i < arrSize; i++)
    std::cout<<arr[i]<<" ";
  std::cout<<std::endl;
}

int* firstPosIntsArr(int n, int* arrSize) {
  int pos_int = 1, idx = 0;
  int* arr = new int[n];
  *arrSize = n;

  for (int idx = 0; idx < n; idx++)
    arr[idx] = pos_int++;

  return arr;
}

int main() {
  int n;
  int* arr;
  int arrSize;

  std::cout<<"Please enter a positive integer:"<<std::endl;
  std::cin>>n;

  arr = firstPosIntsArr(n, &arrSize);

  std::cout<<"The first "<<arrSize<<" positive integers are: ";
  printArray(arr, arrSize);

  delete [] arr;
  return 0;
}
