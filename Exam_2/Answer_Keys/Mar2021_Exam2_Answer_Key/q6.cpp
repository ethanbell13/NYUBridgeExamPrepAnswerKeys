#include <iostream>
int palindromeDistance(int *arr, int n);
int main()
{
    using namespace std;
    int arr1[] = {1, 3, 6, 6, 3, 1};
    int arr2[] = {1, 3, 6, 6, 5, 2};
    cout << palindromeDistance(arr1, 6) << endl;
    cout << palindromeDistance(arr2, 6) << endl;
    return 0;
}
int palindromeDistance(int *arr, int n)
{
    int temp = 0;
    if (n == 2)
        if (arr[0] == arr[1])
            return 0;
        else
            return 1;
    else
    {
        if (arr[0] != arr[n - 1])
            temp++;
        return temp + palindromeDistance(++arr, n - 2);
    }
}