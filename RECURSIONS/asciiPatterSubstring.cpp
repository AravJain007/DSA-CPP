#include <bits/stdc++.h>
#include<string>
using namespace std;

void asciiPatternSubstring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    asciiPatternSubstring(s.substr(1),ans);
    asciiPatternSubstring(s.substr(1),ans+ch);
    asciiPatternSubstring(s.substr(1),ans+to_string(int(ch)));
}

int main(){
    asciiPatternSubstring("AB","");
    return 0;
}