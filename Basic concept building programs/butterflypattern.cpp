#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the length of butterfly :";
    cin>>num;
    for (int i=0;i<=num-1;i++){
        for(int j=0;j<=2*num;j++){
            if(j<=i || j>= 2*num - i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    for (int i=num-1;i>=0;i--){
        for(int j=0;j<=2*num;j++){
            if(j<=i || j>= 2*num - i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    return 0;
}