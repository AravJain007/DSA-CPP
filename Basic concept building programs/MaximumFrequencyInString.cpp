#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    int frequency[26];
    for(int k=0;k<26;k++){
        frequency[k]=0;
    }
    for(int i=0;i<str.size();i++){
        if(str[i]>='a'&& str[i]<='z'){
            frequency[str[i]-'a']++;
        }
    }
    int maxfrequency=0;
    for(int j=0;j<26;j++){
        if(frequency[j]>maxfrequency){
            maxfrequency=frequency[j];
        }
    }
    cout<<"Max Count="<<maxfrequency;
}