#include<bits/stdc++.h>
using namespace std;

int noOfOnes(int num){
    int count=0;
    while(num!=0){
        num=num&(num-1);
        count++;
    }
    return count;
}

int main(){
    int num;
    cin>>num;
    cout<<noOfOnes(num);
}