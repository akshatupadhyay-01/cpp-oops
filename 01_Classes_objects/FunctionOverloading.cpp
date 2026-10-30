#include<iostream>
using namespace std;
class Akshat{
    public:
    int a,b;
    int sum(int a , int b);
    float sum(float a , int b);
    int sum(int a , float b);
    float sum(float a , float b);

};

int Akshat :: sum(int a , int b){
    return a+b;
}

float Akshat :: sum(float a , int b){
    return a+b;
}

int Akshat :: sum(int a , float b){
    return a+b;
}

float Akshat :: sum(float a , float b){
    return a+b;
}

int main(){
    Akshat a1;
    cout<< a1.sum(10, 20)<<endl;
    cout<<a1.sum(2.5f, 2.5f)<<endl;
    cout<<a1.sum(1.0f, 9)<<endl;
    cout<<a1.sum(9, 1.0f)<<endl;
}