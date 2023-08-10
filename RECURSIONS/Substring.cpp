#include<bits/stdc++.h>
#include<string>
using namespace std;

void substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string restOfString = s.substr(1);
    substring(s.substr(1),ans);
    substring(s.substr(1),ans+ch);
}

int main(){
    substring("ABCD","");
}