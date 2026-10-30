#include<iostream>
using namespace std;
class Demo{
    public: 
    int Fsum(int a , int b);
};
//Function declaration outside the class
inline int Demo :: Fsum(int a , int b){
        return a+b;
    }

int main(){
    Demo d1;
    int r = d1.Fsum(20,30);
    cout<<"Sum is : "<<r<<endl;
}