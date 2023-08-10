#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    transform(s1.begin(),s1.end(),s1.begin(), ::toupper);
    cout<<s1;
    return 0;   
}