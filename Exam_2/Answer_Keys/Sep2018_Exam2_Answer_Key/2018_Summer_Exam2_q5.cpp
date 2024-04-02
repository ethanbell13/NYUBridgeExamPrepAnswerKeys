#include <iostream>

void printArr(int arr[], int arrSize) {
  for (int idx = 0; idx < arrSize; idx++)
    std::cout<<arr[idx]<<" ";
  std::cout<<std::endl;
}

int* findCommon(int arr1[], int arr2[], int n, int& outArrSize) {
  int idx;

  int* occurrence_arr = new int[n + 1];
  for (idx = 0; idx <= n; idx++)
    occurrence_arr[idx] = 0;
  
  for (idx = 0; idx < outArrSize; idx++) {
    occurrence_arr[arr1[idx]]++;
    occurrence_arr[arr2[idx]]++;
  }

  int common_idx = 0;
  int elem;
  int* common_arr = new int[outArrSize];
  for (idx = 0; idx <= n; idx++) {
    if (occurrence_arr[idx] >= 2)
      common_arr[common_idx++] = idx;
  }

  delete [] occurrence_arr;

  outArrSize = common_idx;
  return common_arr;
}

int main() {
  int arr1[] = {3, 1, 3, 2, 6, 4};
  int arr2[] = {5, 4, 4, 3, 3, 3};
  int n = 6;
  int arrSize = sizeof(arr1) / sizeof(arr1[0]);

  int* common_arr = findCommon(arr1, arr2, n, arrSize);
  printArr(common_arr, arrSize);

  return 0;
}
