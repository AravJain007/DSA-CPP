#include<bits/stdc++.h>
#include<iostream>  
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    
    char arr[n+1];
    
    cin.getline(arr,n);
    cin.ignore();
    
    int p2=0,wordstart=0,wordend=0;
    int maxlength=0;
    for (int p1=0;p1<=n;p1++){
        if (arr[p1]==' '|| arr[p1]=='\0'){
            int length= p1-p2;
            if(length>maxlength){
                maxlength=length;
                wordstart=p2;
                wordend=p1;
            }
            p2=p1+1;
        }
    }
    cout<<"Max length "<< maxlength<<endl;
    for (int i=0;i<=maxlength;i++){
        int x=i+wordstart;
        cout<<arr[x];
    }
    return 0;
}