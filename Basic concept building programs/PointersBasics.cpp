#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 10;
    int* aptr = &a;
    cout<<*aptr<<endl;//will printout 10
    *aptr=20;
    cout<<a<<endl;//will printout 20 since we changed the value of a to 20
}