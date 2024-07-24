#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void apple(){
        cout<<"Apple";
    }
};
class D {
    public:
    int d;
    void deer(){
        cout<<"deer";
    }
};
class B : public A{
    public:
    int b;
    void ball(){
        cout<<"Ball";
    }
};
class C : public A, public D{ //hybrid has been created as class C is taking after A as well as D 
    public:
    int c;
    void cat(){
        cout<<"Cat";
    }
};

int main(){
    C obj1;
    obj1.apple();
    cout<<endl;
    cout<<obj1.d<<endl;
}