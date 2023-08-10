#include<bits/stdc++.h>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

int setBit(int n,int pos){
    return((n | (1<<pos)));
}

int clearBit(int n, int pos){
    int mask=(~(1<<pos));//here mask is a terminology so remember to use it in future as well
    return(n & mask);
}

int updateBit(int n, int pos, int value){
    //In this first we have to clear the bit at the position and then set the bit at the required position.
    int mask=(~(1<<pos));//here mask is a terminology so remember to use it in future as well
    n=(n & mask);
    return((n | (value<<pos)));
}

int main(){
    int n,pos,value;
    cin>>n>>pos>>value;
    cout<<getBit(n,pos);
    cout<<setBit(n,pos);
    cout<<clearBit(n,pos);
    cout<<updateBit(n,pos,value);
}