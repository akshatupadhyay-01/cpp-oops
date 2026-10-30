#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
        double result;
        double add(double a , double b=30);
        void display();
};

 double Student :: add( double a, double b){
        result = a+b;
        return result;
        }
    
void Student :: display(){
    cout<<"Addition is : " << result<<endl;
}

int main(){
    Student s1;
    double a;
    double b;
    string input;

    cout<<"Enter first number : "<<endl;
    cin >> a;

    cin.ignore(1000,'\n');
    
    cout<<"Enter second number : "<<endl;
    getline(cin, input);

    if(!input.empty()){
        b = stod(input);
        s1.add(a,b);
    }

    else{
        s1.add(a);
    }
    
    s1.display();

    return 0;
}