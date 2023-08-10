#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> st1;
    stack<int> st2;
public:
    void push(int x){
        st1.push(x);
    }
    void pop(){
        if(st1.empty()){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        st2.pop();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
    }
    int peek(){
        if(st1.empty()){
            return -1;
        }
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        int ans = (st2.top());
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return ans;
    }
    bool empty(){
        if(st1.empty()){
            return true;
        }
        return false;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
}