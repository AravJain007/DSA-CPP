#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter";
    cin>>num;
    int sum,i;
    sum=0;
    for(i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            sum++;
            cout<<sum;
        }cout<<endl;
    }
}