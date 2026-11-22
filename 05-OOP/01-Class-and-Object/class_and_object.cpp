#include<bits/stdc++.h>
using namespace std;

class student{
    
    public:
    
    string name;
    
    int age;
    
    double CGPA;
};

int main(){
    
    student s;
    
    student s1;
    
    student s2;
    
    
    s.name = "Dani";
    
    s.age = 26;
    
    s.CGPA = 3.00;
    
    
    s1.name = "Dip";
    
    s1.age = 26;
    
    s1.CGPA = 3.20;
    
    
    s2.name = "A common man ";
    
    s2.age = 36;
    
    s2.CGPA = 3.77;
    
    
    cout<<"Your name is : "<<s.name<<endl;
    
    cout<<"Your age is : "<<s.age<<endl;
    
    cout<<"Your CGPA is : "<<s.CGPA<<endl;
    
    cout<<"\n";
    
    cout<<"Your 2nd student name is : "<<s1.name<<endl;
    
    cout<<"Your 2nd student age is : "<<s1.age<<endl;
    
    cout<<"Your 2nd student cgpa is : "<<s1.CGPA<<endl;
    
    cout<<"\n";
    
    cout<<"Your 3rd student name is : "<<s2.name<<endl;
    
    cout<<"Your 3rd student age is : "<<s2.age<<endl;
    
    cout<<"Your 3rd student cgpa is : "<<s2.CGPA<<endl;
    
    
    return 0;
}
