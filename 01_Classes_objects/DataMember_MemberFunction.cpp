#include<iostream>
using namespace std;
class Student{
public: 

    //Data member
    string name;
   // int age;

    //Member Function
    void display(){
        cout<<"Name : "<<name<<endl;
       // cout<<"Age : "<<age<<endl;
    }
};
int main() {
    Student s1;
    s1.name = "Akshat";
    //s1.age = 18;

    s1.display();

}
