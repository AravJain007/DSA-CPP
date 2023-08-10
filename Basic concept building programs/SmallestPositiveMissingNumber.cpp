#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    const int N = (1e+6);
    bool check[N];
    for(int i=0;i<N;i++)
    {
        check[i]=false;
    }int j=0;
    while (j<n)
    {
        if(check[arr[j]]==false && arr[i]>=0){
            check[arr[j]]=true;
        }j++;
    }
    for(int i=0;i<n;i++)
    {
        if(check[i]==false)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}