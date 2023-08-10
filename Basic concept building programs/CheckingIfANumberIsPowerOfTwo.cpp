#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int ans=(num&(num-1));
    if(ans==0 || num==0)
        cout<<"Power of 2";
    else
        cout<<"Not a power of 2";
    //this here is really important as over here we can see that num & num-1 will give the answer as pure 0 whenever it is a power of two
    //8=(1000)binary     7=(0111)binary
    //So clearly 8 & 7 = (0000)binary
}