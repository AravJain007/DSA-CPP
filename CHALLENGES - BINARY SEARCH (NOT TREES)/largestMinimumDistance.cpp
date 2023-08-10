#include <iostream>
#include <algorithm>
using namespace std;

bool isFeasible(int mid, int arr[], int n, int k)
{
    int pos = arr[0], elements = 1; // elements tells us how many elements are satisfying the condition
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - pos >= mid)
        {
            pos = arr[i];
            elements++;
            if (elements == k)
                return true;
        }
    }
    return false;
}

int largestMinDistance(int arr[], int n, int k)
{
    sort(arr, arr + n); // We are sending the arr pointer
    int result = -1;
    int left = 0, right = n - 1;
    while (left < right)
    {
        int mid = (right + left) / 2;
        if (isFeasible(mid, arr, n, k))
        {
            result = max(result, mid);
            left = mid + 1;
        }
        else
            right = mid;
    }
    return result;
}

int main()
{
    int arr[] = {1, 2, 8, 4, 9};
    int n = 5;
    int k = 3;
    cout << "Largest min distance is : " << largestMinDistance(arr, n, k) << "\n";
    return 0;
}