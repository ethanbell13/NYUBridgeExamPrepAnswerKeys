#include <iostream>
using namespace std;

bool isDoublesPalindrome(int seq[], int n);

int main()
{
    int arr1[] = {3, 3, 12, 12, 3, 3};
    int arr2[] = {4, 5, 5, 4};
    int arr3[] = {3, 3, 12, 12, 9, 9, 3, 3};
    cout << isDoublesPalindrome(arr1, 6) << endl;
    cout << isDoublesPalindrome(arr2, 4) << endl;
    cout << isDoublesPalindrome(arr3, 8) << endl;
    return 0;
}
bool isDoublesPalindrome(int seq[], int n)
{
    if (n <= 2)
    {
        if (n == 0)
            return true;
        else if (n == 2 && seq[0] == seq[1])
            return true;
        else
            return false;
    }
    else
    {
        if (seq[0] != seq[1])
            return false;
        if (seq[n - 1] != seq[n - 2])
            return false;
        if (seq[0] != seq[n - 1])
            return false;
        seq += 2;
        return isDoublesPalindrome(seq, n - 4);
    }
}