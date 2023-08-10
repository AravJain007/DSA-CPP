#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[i + l];  // It is not 1 it is L (lemon).
    }
    for (int i = 0; i < n1; i++)
    {
        b[i] = arr[i + mid + 1];
    }
    int i = 0;
    int j = 0;
    int k = l; // It is not k = 1 it is k = l (l for lemon).
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else if (a[i] > b[j])
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    // These two loops are kept in case the previous loop is completed before all the elements could be filed into arr[].
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)  // This itself is the base condition.
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        Merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    mergeSort(arr, 0, 4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}