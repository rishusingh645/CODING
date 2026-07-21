#include<iostream>
using namespace std;
class student
{
    int id;
    int age;
    string name;
    int physics;
    int chemistry;
    int maths;
    int english;
    int cs;
    string grade;
    float percentage;
    void calculate_percentage()
    {
        percentage=((physics+chemistry+maths+english+cs)*100)/500;
     }
    void calculate_grade()
    {
        if(percentage>=90)
        {
            grade="A+";
        }
        else if(percentage>=80)
        {
            grade="A";
        }
        else if(percentage>=70)
        {
            grade="B+";
        }
        else if(percentage>=60)
        {
            grade="B";
        }
        else if(percentage>=50)
        {
            grade="C";
        }
        else
        {
            grade="F";
        }
    }
    public:
    void get_details()
    {
        cout<<"Enter student id: ";
        cin>>id;
        cout<<"Enter student age: ";
        cin>>age;
        cout<<"Enter student name: ";
        getline(cin>>ws,name);
        cout<<"Enter marks in physics: ";
        cin>>physics;
        cout<<"Enter marks in chemistry: ";
        cin>>chemistry;
        cout<<"Enter marks in maths: ";
        cin>>maths;
        cout<<"Enter marks in english: ";
        cin>>english;
        cout<<"Enter marks in computer science: ";
        cin>>cs;
    }

    void show_details()
    {
        calculate_percentage();
        calculate_grade();
        cout<<"|"<<" "<<id<<"    "<<"|"<<" "<<age<<"     "<<"|"<<" "<<name<<"     "<<"|"<<"     "<<physics<<"     "<<"|"<<" "<<chemistry<<"     "<<"|"<<" "<<maths<<"    "<<"|"<<" "<<english<<"       "<<"|"<<" "<<cs<<"      "<<"|"<<" "<<percentage<<"       "<<"|"<<" "<< grade<<"      "<<"|"<<endl;
        
    }
};
int main()
{
    student Rishu;
    student Sushant;
    Rishu.get_details();
    Sushant.get_details();
    cout<<"| ID\t | Age\t  |  Name\t| Physics\t | Chemistry\t | Maths\t | English\t | Computer Science\t | Percentage\t | Grade |"<<endl;
    
    Rishu.show_details();
    Sushant.show_details();
    return 0;
}
    