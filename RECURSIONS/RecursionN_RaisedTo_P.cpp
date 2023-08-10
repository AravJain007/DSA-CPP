#include<bits/stdc++.h>
using namespace std;

int power(int n, int p){
    if(p==0)
        return 1;
    int answer = power(n,p-1);//see here this will call power(4,3) which will call power(4,2) and so on.
    return(n*answer);         // the value of p doesnt need to be updated seperately. as the value of p passed is reduced while passing itself.
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);
}