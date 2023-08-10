#include<bits/stdc++.h>
#include<stack>
using namespace std;

bool balancedParenthesis(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if (s[i]=='[' || s[i]=='{' || s[i]=='('){
            st.push(s[i]);
        }else if(s[i]==']' || s[i]=='}' || s[i]==')'){
            if((s[i]==']' && st.top()=='[') || (s[i]=='}' && st.top()=='{') || (s[i]==')' && st.top()=='('))
                st.pop();
            else
                return false;
        }
    }
    if(!st.empty())
        return false;
    return true;
}

int main(){
    cout<<balancedParenthesis("({[]})")<<endl;
    return 0;
}