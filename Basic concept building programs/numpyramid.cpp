#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }cout<<endl;
    }
}