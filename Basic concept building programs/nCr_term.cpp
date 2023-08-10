#include<iostream>
using namespace std;

int factorial(int num){
    int fact=1;
    for (int i=1;i<=num;i++){
        fact*=i;
    }
    cout<<"Fact:"<<fact;
    return fact;
}

int ans(int n1, int r1, int x1){
    int st = n1/(r1*x1);
    cout<<"nCr term is:"<<st;
    return 0;
}

int main(){
    int n,r;
    cout<<"Enter n and r:";
    cin>>n>>r;
    int x=n-r;
    int nf=factorial(n);
    int rf=factorial(r);
    int xf=factorial(x);
    ans(nf,rf,xf);
    return 0;
}