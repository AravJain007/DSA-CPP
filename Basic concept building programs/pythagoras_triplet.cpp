#include<iostream>
using namespace std;

int maxi(int n1, int n2, int n3){
    if(n1>n2 && n1>n3){
        return n1;
    }
    else if(n2>n1 && n2>n3){
        return n2;
    }
    else{
        return n3;
    }
}

int main(){
    int a,b,c,max,n1,n2;
    int sum=0;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    max=maxi(a,b,c);
    int eqn1=max*max;
    if(a!=max){
        if (b!=max){
            n1=a;
            n2=b;
        }else if(c!=max){
            n1=a;
            n2=c;
        }
    }else if(b!=max){
        if (a!=max){
            n1=a;
            n2=b;
        }else if(c!=max){
            n1=b;
            n2=c;
        }
    }
    int eqn2=n1*n1 + n2*n2;
    if (eqn1==eqn2){
        cout<<"Pythagoras triplet";
    }else{
        cout<<"Not pythagoras triplet";
    }
}