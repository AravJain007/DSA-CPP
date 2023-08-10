#include<bits/stdc++.h>
#include<string>
using namespace std;

string shiftX(string s){
    if(s.length()==0)
        return "";
    char ch= s[0]; 
    string ans = shiftX(s.substr(1));
    if(ch =='x'){
        return(ans+ch);
    }
    return (ch+ans);
}

int main(){
    string str="axxbdxcefxhix";
    cout<<shiftX(str);
}