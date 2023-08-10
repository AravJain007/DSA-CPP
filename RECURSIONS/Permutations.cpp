#include<bits/stdc++.h>
using namespace std;

void permutation(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        string ros = s.substr(0,i)+s.substr(i+1);
                    //here the (0,i) mein jo i hai woh asal mein length denote karta hai naki end index!!
        permutation(ros,ans+ch);
    }
}

int main(){
    permutation("ABC","");
}