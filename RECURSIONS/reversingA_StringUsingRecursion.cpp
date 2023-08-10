#include<bits/stdc++.h>
#include<string>
using namespace std;

void reverse(string str, int length){
    if(length==-1)
        return;
    cout<<str[length];
    reverse(str,length-1);
}

int main(){
    string str;
    cin>>str;
    reverse(str,str.size());
}