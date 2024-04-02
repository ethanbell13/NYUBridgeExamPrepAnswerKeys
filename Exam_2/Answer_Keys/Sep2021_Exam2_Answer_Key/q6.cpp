#include <iostream>
using namespace std;

int minValueInEvenIndices(int arr[], int arrSize);
int main()
{
    int arr1[] = {7, 1, 5, 4, 2, 12, 15};
    int arr2[] = {7, 1, 5, 4, 2, 12};
    cout << minValueInEvenIndices(arr1, 7) << endl;
    cout << minValueInEvenIndices(arr2, 6) << endl;
    return 0;
}
int minValueInEvenIndices(int arr[], int arrSize)
{
    if (arrSize <= 2)
        return arr[0];
    else
    {
        if (arrSize % 2 == 0)
            arrSize -= 1;
        return min(arr[arrSize - 1], minValueInEvenIndices(arr, arrSize - 2));
    }
}
int min(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}