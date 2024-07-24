#include<iostream>
using namespace std;
class A{
    public:
    void func(){
        cout<<"ABC"<<endl;
    }
};
class B{
    public:
    void func(){
        cout<<"DEF"<<endl;
    }
};
class C : public A, public B{
    public:
};
int main(){
    C obj;
    obj.A::func();
    obj.B::func();

    return 0;
}