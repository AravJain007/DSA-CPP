#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num,n,sum;
    sum=0;
    cout<<"Enter";
    cin>>n;
    num=n;
    while(n!=0){
        sum += (n%10)*(n%10)*(n%10);
        n=n/10;
    }
    if(sum==num){
        cout<<"Armstrong";
    }else{
        cout<<"Not Armstrong";
    }
    return 0;
}