#include<bits/stdc++.h>
using namespace std;

int MaxSubstring(string s){
    vector<int> freq(256,-1);
    int start = -1,maxCount=0;
    for(int i=0;i<s.length();i++){
        if(freq[s[i]] > start){
            start = freq[s[i]];
        }
        freq[s[i]] = i;
        maxCount = max((i-start),maxCount);
    }
    return maxCount;
}

int main(){
    string s;
    cin>>s;
    cout<<MaxSubstring(s)<<endl;
    return 0;
}