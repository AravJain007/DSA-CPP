#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(2);
    s1.insert(4);
    s1.insert(3);
    for(auto i : s1)
        cout << i << " ";
    cout << "\n";
    set<int,greater<int>> s2;
    s2.insert(1);
    s2.insert(2);
    s2.insert(2);
    s2.insert(4);
    s2.insert(3);
    for(auto i = s2.begin(); i != s2.end(); i++)
        cout << *i << " ";
    cout<<"\n";
    return 0;
}