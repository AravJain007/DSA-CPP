#include<bits/stdc++.h>
using namespace std;

string removeDup(string str){
    if (str.size()==0)
        return "";
    char x=str[0];
    string ans = removeDup(str.substr(1));
    if(x==ans[0])
        return ans;
    return (x+ans);
}

int main(){
    string str="aaaabbbbeecccdddd";
    cout<<removeDup(str);
}