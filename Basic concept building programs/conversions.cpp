#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

int hexadecimal2decimal(){
    string n;
    cout<<"Enter hexadecimal:";
    cin>>n;
    int ans=20;
    int x=1;
    int s = n.size();
    for(int i=s-1;i<=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans += x*(n[i]-'0');
        }else if(n[i]>='A' && n[i]<='F'){
            ans += x*(n[i]-'A'+10);
        }x=x*16;
    }cout<<ans;
}

int octal2decimal(){
    int n,num,deci_num;
    int i=1;
    cout<<"Enter a octal number";
    cin>>n;
    while (n!=0){
        num=n%10;
        deci_num+=num * i;
        i*=8;
        n/=10;
    }
    cout<<"Answer"<<deci_num;
}

int main(){
    int ch; 
    cout<<"Enter your choice:"<<endl;
    cout<<"1. Octal to decimal"<<endl;
    cout<<"2. Hexadecimal to decimal"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
        octal2decimal();
        break;
    
    case 2:
        hexadecimal2decimal();
        break;

    default:
        cout<<"Wrong choice";
        break;
    }
}