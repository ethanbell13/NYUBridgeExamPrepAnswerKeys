#include <iostream>

int findFirstPosition(int arr[], int arrSize, int elem) {
  int idx;

  if (arrSize == 1) {
    if (arr[arrSize - 1] == elem)
      return 0;
    else
      return -1;
  }
  else {
    idx = findFirstPosition(arr, arrSize - 1, elem);
    if (idx == -1) {
      if (arr[arrSize - 1] == elem)
        return arrSize - 1;
    }
  }

  return idx;
}

int main() {
  int arr[] = {2, 15, 3, 8, 3, 10, 6, 23, 12, 32};
  int arrSize = sizeof(arr) / sizeof(arr[0]);
  int srch = 3;

  int res = findFirstPosition(arr, arrSize, srch);
  std::cout<<res<<std::endl;

  return 0;
}
