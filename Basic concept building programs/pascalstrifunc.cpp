#include<iostream>
using namespace std;

int fact(int num){
    int x=1;
    for(int i=1;i<=num;i++){
        x=x*i;
    }
    return x;
}

int main(){
    int n;
    cout<<"Enter limit";
    cin>>n;
    for (int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int f1=fact(i);
            int f2=fact(j);
            int f3=fact(i-j);
            cout<<(f1/(f2*f3));
        }cout<<endl;
    }
}