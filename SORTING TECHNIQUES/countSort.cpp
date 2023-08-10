#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n)
{
    // First we find the max value
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        k = max(arr[i], k);
    }
    int count[10] = {0};
    // Now we count the frequency of each element
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    // Now we add the previous count to the next number
    for (int i = 1; i <= k; i++)
    {
        count[i] += count[i - 1];
    }
    // Now we find the solution using special ninja technique
    int output[9] = {0};
    for (int i = n - 1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i]; // We reduce the value first and then we store the arr value
    }                                     // in the sol array at the position (count[arr[i]]-1)
    // Now we put the sol array in the orignal array
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

int main()
{
    int arr[] = {1, 3, 2, 3, 4, 1, 4, 6, 3};
    countSort(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}