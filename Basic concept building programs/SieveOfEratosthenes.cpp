#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int prime[n]={0};
    prime[0]=1;
    for(int i=2;i<=n;i++){
        int x=i*i;
        if (prime[i]==0){
            for(int j=x;j<=n;j+=i){//Here what we did is we reduced iterations even more and the updation condition makes j a multiple of i
                prime[j]=1;        //and hence all the number will be composite.
            }
        }
    }
    for(int i=2;i<n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
    return 0;
}