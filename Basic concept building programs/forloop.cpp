#include<iostream>
using namespace std;

int main(){

    int a, sum;
    cout<<"Enter a number =";
    cin>>a;
    sum = 0;

    for(int i=1;i<=a;i++){
        sum += i;
    }
    cout<<"Sum of all the numbers from 1 to "<<a<<" is :"<<sum<<endl;
    return 0;
}