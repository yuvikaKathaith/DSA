#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void apple(){
        cout<<"Apple";
    }
};
class B : public A{
    public:
    int b;
    void ball(){
        cout<<"Ball";
    }
};
class C : public A{ //hierarchy has been created as class B and C both are taking after A 
    public:
    int c;
    void cat(){
        cout<<"Cat";
    }
};

int main(){
    A object1;
    object1.apple();
    cout<<endl;
    B object2;
    object2.apple();
    cout<<endl;
    object2.ball();
    cout<<endl;
    cout<<object2.b<<endl;
    C object3;
    cout<<object3.a<<endl;
    object3.cat();


}