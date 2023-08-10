#include<bits/stdc++.h>
using namespace std;

bool RedundantOrNot(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
            st.push(s[i]);
        else if(s[i]==')'){
            if(st.top()=='('){
                return true; // We return true because the bracket turned out to be redundant.
            }
            while(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/'){
                st.pop();
            }
            st.pop(); // This pop() is for the opening bracket which we had added in the stack.
        }
    }
    return false;
}

int main(){
    cout<<RedundantOrNot("((a+b)*c)+(a+b)")<<endl;
    return 0;
}