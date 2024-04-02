#include <iostream>

double findMedian(int arr[], int n) {
  int mid = (n + 1) / 2;

  int* occurrence_arr = new int[n + 1];
  for (int idx = 0; idx <= n; idx++)
    occurrence_arr[idx] = 0;
  
  for (int idx = 0; idx < n; idx++)
    occurrence_arr[arr[idx]]++;
  
  double median;
  double cnt = 0;
  for (int idx = 0; idx <= n; idx++) {
    cnt += occurrence_arr[idx];
    if (cnt >= mid) {
      median = idx;
      break;
    }
  }

  delete [] occurrence_arr;

  return median;
}

void print_arr(int arr[], int arrSize) {
  for (int idx = 0; idx < arrSize; idx++)
    std::cout<<arr[idx]<<" ";
  std::cout<<std::endl;
}

int main() {
  int arr[] = {3, 5, 3, 7, 1, 7, 6};
  int n = 7;

  double median = findMedian(arr, n);

  print_arr(arr, n);
  std::cout<<"median: "<<median<<std::endl;

  return 0;
}
