#include <iostream>
using namespace std;
// Student type class
class Student
{
    string name;
public:
    Student(string s)
    {
        name = s;
    }
    Student()
    {
        name = "Unknown";
    }
	~Student()
    {
        cout<<"Object Destroyed";
    }
    void print_name()                     
    {
        cout << name << endl;
    }
};

int main()
{
    Student s1("Chayank");
    Student s2;
    s1.print_name();
    s2.print_name();
    return 0;
}