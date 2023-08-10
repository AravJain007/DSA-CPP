#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"Enter element "<<i<<" =";
        cin>>arr[i];
    }
    cout<<"Last element ="<<arr[n-1];
}
