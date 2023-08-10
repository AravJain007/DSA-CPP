#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str="114358347";
    sort(str.begin(),str.end(),greater<int>());
    cout<<str;
}