#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    bool flag=0;
    cout<<"enter num:";
    cin>>num;
    for(int i=2;i<sqrt(num);i++){
        if(num%i==0){
            cout<<"Not Prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime No"<<endl;
    }
    return 0;
}