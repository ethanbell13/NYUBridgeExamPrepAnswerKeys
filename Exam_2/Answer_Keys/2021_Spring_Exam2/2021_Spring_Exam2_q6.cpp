#include <iostream>

int palindromeDistance(int* arr, int n) {
  int start = 0;
  int end = n - 1;
  int elem;

  if (n <= 1)
    return 0;
  else {
    if (arr[start] == arr[end])
      elem = 0;
    else
      elem = 1;
    return elem + palindromeDistance(arr + 1, n - 2);
  }
}

int main() {
  int arr[] = {1, 3, 6, 6, 5, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  int res = palindromeDistance(arr, n);
  std::cout<<res<<std::endl;

  return 0;
}
