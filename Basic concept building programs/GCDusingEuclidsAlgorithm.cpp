#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int rem;
    while(rem!=0){
        rem=a%b;
        if(rem==0){
            cout<<"GCD is "<<b;
            break;
        }
        a=b;
        b=rem;
    }
}