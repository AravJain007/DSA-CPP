#include <bits/stdc++.h>
#include <vector>
using namespace std;

int myCompare(vector<pair<int, int>> p1, vector<pair<int, int>> p2)
{
    return (p1.first < p2.first);
}

int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 2, 9};
    vector<pair<int, int>> v;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {                                      // (sizeof(arr)/sizeof(arr[0])) this gives us the size of the array. Dont ask how
        v.push_back(make_pair(arr[i], i)); // Here we are pushing into vector our pair using sexy sexy functions
    }
    sort(v.begin(), v.end(), myCompare);
    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = 1; // Here we are putting the i value in the postion where the corresponding number was in the first array
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i];
    }
    return 0;
}