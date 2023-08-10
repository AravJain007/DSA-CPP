#include<iostream>
using namespace std;

int fibenacci_series(int n){
    int p=0;
    int c=1;
    int sum=0;
    cout<<"01";
    for(int i=1;i<=n-2;i++){
        sum =c+p;
        cout<<sum;
        p=c;
        c=sum;
    }
}

int main(){
    int num;
    cout<<"Enter limit:";
    cin>>num;
    fibenacci_series(num);
}