#include <iostream>
#include <vector>

double findMedian(int arr[], int n) {
  int mid = (n + 1) / 2;

  std::vector<int> occurrence_vec;
  for (int idx = 0; idx <= n; idx++)
    occurrence_vec.push_back(0);
  
  for (int idx = 0; idx < n; idx++)
    occurrence_vec[arr[idx]]++;
  
  double median;
  double cnt = 0;
  for (double idx = 0; idx <= n; idx++) {
    cnt += occurrence_vec[idx];
    if (cnt >= mid) {
      median = idx;
      break;
    }
  }

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
