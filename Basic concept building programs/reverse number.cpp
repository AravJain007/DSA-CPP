#include<iostream>
using namespace std;

int main(){

    int n,sum;
    cout<<"Enter number:";
    cin>>n;
    sum=0;
    while (n!=0){
        sum = (sum*10) + (n%10);
        n /= n;
    }
}