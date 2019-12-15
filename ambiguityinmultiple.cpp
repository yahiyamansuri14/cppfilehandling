#include<iostream>
 using namespace std;
 class A{
    public:void show(){
        cout<<"In class A\n";
    }

 };
 class B{
    public:void show(){
        cout<<"In class B\n";
    }
 };
 class C:public A,public B{
    public:void display(){
        cout<<"In class C\n";
    };

 };
 int main(){
    C c;
    c.display();
    c.show();//request for member function show is ambigous error occur
    return 0;
 }
