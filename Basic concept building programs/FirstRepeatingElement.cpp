#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter limit:";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    const int N = 1e+6;
    int index[N];
    for (int i=0;i<N;i++)
    {
        index[i]=-1;
    }
    int minindex=2147483647;
    for(int i=0;i<n;i++)
    {
        if(index[array[i]]!=1){
            if(index[array[i]]<minindex){
                minindex=index[array[i]];
            }else{
                index[array[i]]=i;
            }
        }
    }
    if (minindex==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minindex;
    }
}