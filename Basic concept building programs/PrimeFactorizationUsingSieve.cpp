#include<bits/stdc++.h>
using namespace std;

void primefactor(int num){
    int spf[num];
    for(int i=2;i<=num;i++){
        spf[i]=i;
    }
    for(int i=2;i<=num;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=num;j+=i){
                if(spf[j]=j){
                    spf[j]=i;
                }
            }
        }
    }
    while (num!=1){
        cout<<spf[num]<<" ";
        num=num/spf[num];
    }
}

int main(){
    int n;
    cin>>n;
    primefactor(n);
    return 0;
}