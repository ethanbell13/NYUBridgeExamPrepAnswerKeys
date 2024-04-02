#include <iostream>
using namespace std;

int *intersectSortedArrays(int srtArr1[], int n1, int srtArr2[], int n2, int &resArrSize);
void printArray(int *arr, int logicalSize);
int sortedSearch(int arr[], int low, int high, int x);
int main()
{
    int arr1[] = {1, 3, 5, 6, 8, 14, 15};
    int arr2[] = {2, 3, 5, 10, 15, 18};
    int *result;
    int size;
    result = intersectSortedArrays(arr1, 7, arr2, 6, size);
    printArray(result, size);
    return 0;
}
int *intersectSortedArrays(int srtArr1[], int n1, int srtArr2[], int n2, int &resArrSize)
{
    int *resArr = new int[n1 + n2];
    int arr2Index = 0;
    int minArr2 = srtArr2[0];
    resArrSize = 0;
    for (int i = 0; i < n1; i++)
    {
        if (srtArr1[i] < minArr2)
            continue;
        else
        {
            if (srtArr1[i] == minArr2)
            {
                resArr[resArrSize] = minArr2;
                resArrSize++;
            }
            else
                i--;
            arr2Index++;
            if (arr2Index == n2)
                break;
            minArr2 = srtArr2[arr2Index];
        }
    }
    return resArr;
}
void printArray(int *arr, int logicalSize)
{
    for (int i = 0; i < logicalSize; i++)
        cout << arr[i] << " ";
    cout << endl;
}