#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={10,20,30};
    cout<<*arr<<endl;//prints 10
    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;//prints 10 then 20 then 30
    }
}