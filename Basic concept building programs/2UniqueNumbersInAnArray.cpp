#include<bits/stdc++.h>
using namespace std;

int setBit(int num,int pos){
    return((num & (1<<pos))!=0);
}

int unique(int arr[],int n){
    int xorsum;
    for (int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    int tempxor=xorsum;
    int pos=0,answer=0;
    while(answer!=1){
        answer=xorsum & 1;
        pos++;//here the position will become one extra so therefore you need to adjust it later
        xorsum>>1;
    }int newxor=0;
    for(int i=0;i<n;i++){
        if(setBit(arr[i],pos-1))//here we take position-1 because earlier the position was increased extra once
            newxor=newxor^arr[i];
    }cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}

int main(){
    int arr[8]={1,2,3,4,3,5,2,1};
    unique(arr,8);
    return 0;
}