// Basic calculator switch case
#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter two numbers:"<<endl;
    cin>>n1>>n2;
    
    char op;
    cout<<"Input operator character :";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"Sum is :"<< n1+n2;
        break;
    case '-':
        cout<<"Difference is :"<< n1-n2;
        break;
    case '*':
        cout<<"Product is :"<< n1*n2;
        break;
    case '/':
        cout<<"Quotient is :"<< n1/n2;
        break;
    case '%':
        cout<<"Remainder is :"<< n1%n2;
        break;
    default:
        cout<<"Wrong operator entered";
        break;
    }
    return 0;
}