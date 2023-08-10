#include <bits/stdc++.h>
using namespace std;

class poly
{
public:
    void func()
    {
        cout << "Function with no arguments" << endl;
    }
    void func(int x)
    {
        cout << "Function with int argument" << endl;
    }
    void func(double y)
    {
        cout << "Function with double argument" << endl;
    }
}; // Very imp to put semicolon at the end of the class

int main()
{
    poly obj;
    obj.func();
    obj.func(4);
    obj.func(6.2);
    return 0;
}