#include<iostream>
using namespace std;
class person
{
    private:
        string name;
        int age;
    public:
        void input()
        {
            cout<<"Enter name: ";
            //getline(cin,name);
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
        }
        void display()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
class employee:public person
{
    private:
        int empid;
        string designation;
    public:
        void enter()
        {
            //person::input();
            cout<<"Enter employee ID: ";
            cin>>empid;
            cout<<"Enter designation: ";
            cin>>designation;
            //getline(cin,designation);
        }
        void show()
        {
            //person::display();
            cout<<"Employee ID: "<<empid<<endl;
            cout<<"Designation: "<<designation<<endl;
        }
};
class salary:public employee
{
    private:
        int basic_pay, medical_allowance, travell_allowance, bonus;
    public:
        void take()
        {
            //employee::enter();
            cout<<"Enter basic pay: ";
            cin>>basic_pay;
            cout<<"Enter medical allowance: ";
            cin>>medical_allowance;
            cout<<"Enter travel allowance: ";
            cin>>travell_allowance;
            cout<<"Enter bonus: ";
            cin>>bonus;
        }
        void calculate()
        {
            int total_salary;
            total_salary=basic_pay+medical_allowance+travell_allowance+bonus;
            cout<<"Total Salary: "<<total_salary<<endl;
        }
        void tell()
        {
            display();
            show();
            cout<<"Basic Pay: "<<basic_pay<<endl;
            cout<<"Medical Allowance: "<<medical_allowance<<endl;
            cout<<"Travel Allowance: "<<travell_allowance<<endl;
            cout<<"Bonus: "<<bonus<<endl;
            calculate();
        }
        
};
int main(){
    salary s;
    s.input();
    s.enter();
    s.take();
    s.tell();
    return 0;
}

