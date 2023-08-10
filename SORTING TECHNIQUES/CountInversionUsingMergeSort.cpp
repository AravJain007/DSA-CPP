#include <bits/stdc++.h>
using namespace std;

long long Merge(int arr[], int l, int mid, int r)
{
    long long inv = 0;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[i];
            k++;
            j++;
            inv += n1 - i; // Because here (a[i]>b[j]) and (i<j)
            // (inv+= n1-i) becyse here if (a[i]>b[j]) then a[i+1] and a[i+2] and so on will also be greater than b[j]
        }
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    return inv;
}

long long mergeSort(int arr[], int l, int r)
{
    long long inversion = 0;
    int mid = (l + r) / 2;
    if (l < r)
    {
        inversion += mergeSort(arr, l, mid);
        inversion += mergeSort(arr, mid + 1, r);
        inversion += Merge(arr, l, mid, r);
    }
    return inversion;
}

int32_t main()
{
    int arr[] = {3, 5, 6, 9, 1, 2, 7, 8};
    int answer = mergeSort(arr, 0, 8);
    cout << answer;
    return 0;
}