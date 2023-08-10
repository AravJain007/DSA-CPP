#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"Enter element";
        cin>>arr[i];
    }int maxno=INT_MIN;
    int minno=INT_MAX; 
    for(int i=0;i<n;i++){
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }cout<<"Maximum of the array :"<<maxno<<endl;
    cout<<"Minimum of the array:"<<minno<<endl;
    return 0;
}
