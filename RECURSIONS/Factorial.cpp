#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    if (num==0)
        return 1;
    int prevFactorial=factorial(num-1);
    return (num*prevFactorial);
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
}