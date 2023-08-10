#include<iostream>
using namespace std;

int main(){

    int num,s;
    cout<<"Enter:";
    cin>>num;
    s=0;
    for(int i=0;i<=num-1;i++){
        if (i%2==0){
            s=1;
        }
        else{
            s=0;
        }
        for(int j=0;j<=i;j++){
            cout<<s;
            if(s==0){
                s=1;
            }else{
                s=0;
            }
        }cout<<endl;
    }
    return 0;
}