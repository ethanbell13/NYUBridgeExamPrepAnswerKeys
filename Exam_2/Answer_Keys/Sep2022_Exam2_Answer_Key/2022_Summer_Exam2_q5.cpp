//S is comprised of UNIQUE integers, there are no repeating values, so the first appearance of element x is the ONLY appearance of element x

#include <iostream>

int findIndex(int S[], int x, int left, int right) {
  int elem1 = S[left];
  int elem2 = S[right];

  if (elem1 == x)
    return left;
  else if (elem2 == x)
    return right;

  if (right - left <= 1) 
    return -1;
  else 
    return findIndex(S, x, left+1, right-1);
}

void print_res(int arr[], int left, int right, int x) {
  int res = findIndex(arr, x, left, right);

  std::cout<<"["<<arr[left];
  for (int idx = left+1; idx < right; idx++)
    std::cout<<" "<<arr[idx];
  std::cout<<"]"<<std::endl;

  std::cout<<"element "<<x<<" at index "<<res<<"\n"<<std::endl;
}

int main() {
  int left = 0;

  int S1[] = {10, 15, 20, 25, 28, 40, 55, 90};
  int right1 = 7;
  print_res(S1, left, right1, 39);

  int S2[] = {-1, 5, 17, 45, 66, 80, 90, 95, 144, 356};
  int right2 = 9;
  print_res(S2, left, right2, 95);

  int S3[] = {-87, 10, 18, 19, 30, 40, 49, 74, 102, 178};
  int right3 = 9;
  print_res(S3, left, right3, 18);

  int S4[] = {9, 14, 38, 55, 66, 71, 78, 84, 129, 178, 234};
  int right4 = 10;
  print_res(S4, left, right4, 11);

  return 0;
}
