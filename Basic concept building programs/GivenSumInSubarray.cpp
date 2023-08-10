#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int st=-1,en=-1,i=0,j=0,sum=0;
    //basically here we are using two pointers to traverse the array only once
    //hence keeping our time complexity as O(n).
    while(j<n && sum+a[j]<=s){
        sum += a[j];
        j++;
    }
    if (sum==s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n)
    {
        sum+=a[j];
        while(sum>s)
        {
            sum -= a[i];
            i++;
        }
        if (sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en; 
} 