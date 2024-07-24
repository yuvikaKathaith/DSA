#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    void bark(){
        cout<<"dogs bark";
    }
};
class Human{
    public:
    float height;
    string color;
    void speak(){
        cout<<"human speaks";
    }
};
//multiple inheritance --> 
class Hybrid : public Animal, public Human{
    
};

int main(){

    Hybrid obj1;
    cout<<obj1.age<<endl;
    obj1.bark();
    cout<<obj1.color<<endl;   
    obj1.speak(); 
}