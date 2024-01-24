#include <iostream>
using namespace std;
class student
{
    string name;

public:
    // string name;
    int age;
    bool gender;
    student()
    {
        cout << "Default constructor" << endl;
    } // Default constructor
    student(string s, int a, int g)
    {
        cout << "Parameterised Constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } // parameterised constructor
    student(student &a)
    {
        cout << "Copy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    ~student()
    {
        cout << "Destructor Called" << endl;
    }
    void setName(string s)
    {
        name = s;
    }
    void getName()
    {
        cout << name << endl;
    }
    void printInfo()
    {
        cout << "Name= ";
        cout << name << endl;
        cout << "Age= ";
        cout << age << endl;
        cout << "Gender= ";
        cout << gender << endl;
    }
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    // // student a;
    // // a.name="aman";
    // // a.age=20;
    // // a.gender=1;
    // student arr[3];
    // for(int i=0;i<3;i++){
    //     string s;
    //     cin>>s;
    //     arr[i].setName(s);
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    // }
    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }

    student a("Aman", 20, 1);
    // a.printInfo();
    student b;     // for default constructor
    student c = a; //for copy constructor
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