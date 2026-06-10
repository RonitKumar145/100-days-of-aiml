#include <bits/stdc++.h>
using namespace std;

/*
    MERGE FUNCTION

    Purpose:
    Merge two already sorted halves of the array into one sorted part.

    Example:
    Left Half  = [3, 6, 9]
    Right Half = [2, 5, 8]

    After merging:
    [2, 3, 5, 6, 8, 9]
*/
void merge(int arr[], int low, int mid, int high)
{
    // Temporary array to store merged sorted elements
    vector<int> temp;

    // Pointer for left sorted half
    int left = low;

    // Pointer for right sorted half
    int right = mid + 1;

    /*
        Compare elements from both halves.

        Whichever element is smaller gets added
        to temp and its pointer moves forward.
    */
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    /*
        One of the halves is exhausted.

        If left half still has elements,
        copy them into temp.
    */
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    /*
        If right half still has elements,
        copy them into temp.
    */
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    /*
        Copy sorted elements back into
        the original array.

        temp index starts from 0,
        while array index starts from low.
    */
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

/*
    RECURSIVE MERGE SORT

    Steps:
    1. Divide array into two halves.
    2. Sort left half.
    3. Sort right half.
    4. Merge both sorted halves.
*/
void merge_sort(int arr[], int low, int high)
{
    // Base Case:
    // Single element array is already sorted.
    if (low >= high)
        return;

    // Find middle index
    int mid = (low + high) / 2;

    // Recursively sort left half
    merge_sort(arr, low, mid);

    // Recursively sort right half
    merge_sort(arr, mid + 1, high);

    // Merge the two sorted halves
    merge(arr, low, mid, high);
}

/*
    Wrapper Function

    Allows us to call:
    merge_sort(arr, n);

    instead of:
    merge_sort(arr, 0, n-1);
*/
void merge_sort(int arr[], int n)
{
    merge_sort(arr, 0, n - 1);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sort array using Merge Sort
    merge_sort(arr, n);

    // Print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}