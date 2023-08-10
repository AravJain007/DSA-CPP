#include<bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n,char source,char destination,char helper){
    if(n==0)
        return;
    TowerOfHanoi(n-1,source,helper,destination);
    //here we are moving n-1 blocks from our source = source to our destination = helper using helper =destination
    cout<<"Move block from "<<source<<" to "<<destination<<endl;
    TowerOfHanoi(n-1,helper,destination,source);
}

int main(){
    TowerOfHanoi(4,'A','C','B');
    return 0;
}