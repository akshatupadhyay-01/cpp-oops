#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int &b = a;
    cout<<"value of a : "<<a<<endl;
    cout<<"Value of b : "<<b<<endl;
    cout<<"After exchange value "<<endl;
    b = 30;
    cout<<"value of a : "<<a<<endl;
    cout<<"Value of b : "<<b<<endl;
}