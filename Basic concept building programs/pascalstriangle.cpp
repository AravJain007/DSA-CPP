#include<iostream>
using namespace std;

int main(){
    int num,i,num_p;
    cout<<"Enter a number:";
    cin>>num;
    for(i=0;i<=num;i++){
        int num_p=1;
        for(int j= (num-i);j>=0;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<num_p<<" ";
            num_p=num_p*(i-j)/(j+1);
        }cout<<endl;
    }
}