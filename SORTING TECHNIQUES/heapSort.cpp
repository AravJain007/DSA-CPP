#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define rep(a,b) for(int i=a;i<b;i++) 

void heapify(vi &a, int n, int i){
    int maxIdx = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<n && a[l]>a[maxIdx])
        maxIdx = l;
    if(r<n && a[r]>a[maxIdx])
        maxIdx = r;
    if(maxIdx != 1){
        swap(a[i],a[maxIdx]);
        heapify(a,n,maxIdx);
    }
}

void heapsort(vi &a){
    int n = a.size();
    for(int i = n/2-1;i>=0;i--)
        heapify(a,n,i);
    for(int i=n-1;i>0;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}

int main(){
    vi a = {1,5,7,2,4,3,6};
    heapsort(a);
    for(auto i : a)
        cout << i << " ";
    cout<<"\n";
    return 0;
}