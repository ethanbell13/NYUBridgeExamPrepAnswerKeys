#include <iostream>
using namespace std;

bool isSymmetricDistribution(int arr[], int n);

int main()
{
    int arr1[] = {9, 7, 5, 5, 3, 5, 1, 9, 1};
    int arr2[] = {9, 7, 9, 5, 3, 5, 1, 9, 1};
    cout << "True prints out as " << true << endl;
    cout << isSymmetricDistribution(arr1, 9) << endl;
    cout << isSymmetricDistribution(arr2, 9) << endl;
    return 0;
}
bool isSymmetricDistribution(int arr[], int n)
{
    int *buckets = new int[n + 1];
    for (int i = 0; i <= n; i++)
        buckets[i] = 0;
    for (int i = 0; i < n; i++)
        buckets[arr[i]]++;
    for (int i = 0; i < n; i++)
        if (buckets[i + 1] != buckets[n - i])
            return false;
    return true;
}