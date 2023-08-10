#include <bits/stdc++.h>
using namespace std;

class student
{
    string name;

public: // We need to write this to make this public as by default the data members of a class are private
    int age;
    bool gender;
    // Default constructor
    student()
    {
        cout << "Default constructor" << endl;
    }
    // We can make constructors as well which will help us initialize values faster
    // It is called a parameterised constructor
    student(string s, int a, bool g)
    {
        cout << "Parameterised constructor" << endl;
        name = s;
        age = a;
        gender = g;
    }
    student(student &a)
    {
        cout << "Copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    // This function is to access the private data member name
    void setName(string s)
    {
        name = s;
    }
    void getName()
    {
        cout << name << endl;
    }
    // This fucntion is to print the info of people
    void printInfo()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
        cout << "Gender :" << gender << endl;
    }
    // This is operator overloading. We use this to define what an operator means for a particular class
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
            return true;
        return false;
    }
};

int main()
{
    // string s;
    // student a;
    // a.setName("Tim");
    // a.age=20;
    // a.gender=0;
    // // Now we can even make an array with data type as students
    // student arr[3];
    // for(int i=0;i<3;i++){
    //     cin>>s;
    //     arr[i].setName(s);
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    // }
    // // Speacial way of printing
    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }
    // a.setName("James Bond"); // This will help us access private data members of the class
    // a.getName();  // This will print the name stored in student a
    student a("jim", 22, 0);
    student b;
    student c = a; // copy constructor
    // Here in c==a we use operator overloading as it helps us to define what an operator means for a particular class
    if (c == a)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }
    return 0;
}