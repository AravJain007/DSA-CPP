#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    Complex(int r, int i)               // Parameterised Constructor
    {
        real = r;
        imaginary = i;
    }
    Complex operator+(Complex const &a) // Operator overloading
    {
        Complex result(0, 0);
        result.real = real + a.real;
        result.imaginary = imaginary + a.imaginary;
        return result;
    }
    void display()
    {
        cout << real << " + i" << imaginary << endl;
    }
};

int32_t main()
{
    Complex a(12, 7), b(6, 7);
    Complex c = a + b;
    c.display();
}