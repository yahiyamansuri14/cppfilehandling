#include<iostream>
 using namespace std;
 class A{
    public:virtual void show(){
        cout<<"In class A\n";
    };
 };
 class B{
    public:void show(){
        cout<<"In class B\n";
    };
 };
 class C:public A,public B{
    public:void display(){
        cout<<"In class C\n";
    };
 };
 int main(){
    A *a;
    C c;
    a=&c;
    a->show();
    return 0;
 }
