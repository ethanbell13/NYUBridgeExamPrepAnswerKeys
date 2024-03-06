#include <iostream>

void printArray(int arr[], int arrSize) {
  int i;
  for (i = 0; i < arrSize; i++)
    std::cout<<arr[i]<<" ";
  std::cout<<std::endl;
}

int* firstPosIntsArr(int n, int* arrSize) {
  int pos_int = 0, idx = 0;
  int* arr = new int[n];
  *arrSize = n;

  while (n > 0) {
    arr[idx] = pos_int;
    pos_int += 2;
    idx++;
    n--;
  }

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
