#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int binary_addition(int n1, int n2){
    int carryover=0;
    int x=1;
    int ans=0;
    while(n1>0 && n2>0){
        int s1= n1%10;
        cout<<s1<<endl;
        int s2= n2%10;
        cout<<s2<<endl;
        int sum=s1+s2+carryover;
        cout <<"sum"<<sum<<endl;
        if(sum==0||sum==1){
            int ans1=sum;
            ans += x*ans1;
            carryover=0;
            cout<<"Ans"<<ans<<endl;
            cout<<"carry"<<carryover<<endl;
        }else if(sum==2){
            int ans1=0;
            ans += x*ans1;
            carryover=1;
            cout<<"Ans"<<ans<<endl;
            cout<<"carry"<<carryover<<endl;
        }else if(sum==3){
            int ans1=1;
            ans += x*ans1;
            carryover=1;
            cout<<"Ans"<<ans<<endl;
            cout<<"carry"<<carryover<<endl;
        }if(n1/10==0 && n2/10==0){
            ans+= (x*10)*carryover;
        }
        x*=10;
        n1/=10;
        n2/=10;
        cout<<n1<<" "<<n2<<" "<<x<<endl;
    }cout<<"ans"<<ans;
}

int main(){
    int a,b;
    cout<<"Enter two binary numbers:";
    cin>>a>>b;
    binary_addition(a,b);
}