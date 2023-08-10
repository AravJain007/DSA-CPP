#include <bits/stdc++.h>
using namespace std;

int swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r) // This is to find the position of the pivot element
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r); // We are swapping the pivot element to the position where it should be
    return i + 1;        // We are returning the position of the pivot element
}

void quickSort(int arr[], int l, int r) // This is to recursively send the smaller arrays for the same process
{
    if (l < r)                          // Base Case for recursion
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    quickSort(arr, 0, 4);              // Remember to pass n-1 when the array is entered by the user
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}