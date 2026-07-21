#include <iostream>
using namespace std;
class student
{
    int id;
    string name;
    char division;
    int age;
    int rollno;
public:
    // Parameterized Constructor
    student(int i, string n, char c, int a, int r)
    {
        id = i;
        name = n;
        division = c;
        age = a;
        rollno = r;
    }
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << division << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
    void enter()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Class: ";
        cin >> division;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Roll No: " ;
        cin >> rollno ;
    }
    
    
};

int main()
{
    student rishu(1, "Rishu", 'A', 20, 101);
    rishu.display();
    rishu.enter();
    rishu.display();
    return 0;
}