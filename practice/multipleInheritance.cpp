#include<iostream>
using namespace std;
class Teacher{
    public:
    string subject;
    double salary;
};
class Student{
    public:
    string name;
    int rollno;
};
class TA :public Student,public Teacher{
    
};
int main(){
    TA t1;
    t1.name = "Naman";
    t1.subject = "CSE";
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    return 0;
    
}