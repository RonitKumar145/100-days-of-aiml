#include <bits/stdc++.h>
using namespace std;

/*
    PARTITION FUNCTION

    Purpose:
    Place the pivot element in its correct position.

    All smaller elements go to the left.
    All larger elements go to the right.

    Returns:
    Index where pivot finally gets placed.
*/
int partition(int arr[], int low, int high)
{
    // Choose first element as pivot
    int pivot = arr[low];

    // Two pointers
    int i = low;
    int j = high;

    while (i < j)
    {
        // Move i until element becomes greater than pivot
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        // Move j until element becomes smaller than pivot
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }

        // Swap misplaced elements
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    // Place pivot in its correct position
    swap(arr[low], arr[j]);

    return j;
}

/*
    QUICK SORT

    1. Find pivot position.
    2. Sort left side.
    3. Sort right side.
*/
void quick_sort(int arr[], int low, int high)
{
    // Base Case
    if (low >= high)
        return;

    // Partition and get pivot position
    int pIndex = partition(arr, low, high);

    // Sort left side
    quick_sort(arr, low, pIndex - 1);

    // Sort right side
    quick_sort(arr, pIndex + 1, high);
}

/*
    Wrapper Function
*/
void quick_sort(int arr[], int n)
{
    quick_sort(arr, 0, n - 1);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quick_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}