#include<iostream>
using namespace std;

int main(){
    int a,b,i,n;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        for(n=2;n<i;n++){
            if (i%n==0){
                break;
            }
        }if (i==n){
            cout<<i<<",";
        }
    }
    return 0; 
}