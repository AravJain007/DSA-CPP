#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> st1;
public:
    void push(int x){
        st1.push(x);
        return;
    }
    int pop(){
        if(st1.empty()){
            return -1;
        }
        int x = st1.top();
        st1.pop();
        if(st1.empty()){
            return x;
        }
        int item = pop();
        st1.push(x);
        return item;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    cout<<q.pop();
}