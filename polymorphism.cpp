#include <bits/stdc++.h>
using namespace std;
// function overloading
class ApnaCollege
{
public:
    void fun()
    {
        cout << "I am a function with no arguments" << endl;
    }
    void fun(int x)
    {
        cout << "I am a function with int arguments" << endl;
    }
    void fun(double x)
    {
        cout << "I am a function with double arguments" << endl;
    }
};
//operator overloading
class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }
    void display()
    {
        cout << real << " + i" << imag << endl;
    }
};
// function overwriting (virtual functions) runtime polymorphism
class Base{
    public:
    virtual void print(){
        cout<<"This is the base class's print function"<<endl;
    }
    void display2(){
        cout<<"This is the base class's display function"<<endl;
    }
};
class Derived:public Base{
    public:
    void print(){
        cout<<"This is the derived class's print function"<<endl;
    }
    void display2(){
        cout<<"This is the derived class's display function"<<endl;
    }
};
int main()
{
    // ApnaCollege obj;
    // obj.fun();
    // obj.fun(3);
    // obj.fun(6.2);

    // Complex c1(12, 7);
    // Complex c2(6, 7);
    // Complex c3 = c1 + c2;
    // c3.display();

    Base *baseptr;
    Derived d;
    baseptr=&d;
    baseptr->print();
    baseptr->display2();
    return 0;
}