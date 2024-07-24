#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    void sleep(){
        cout<<"sleep called";
    }
};
class Dogs: public Animal{
    public:
    string color;
};
//multilevel inheritance --->
class chihuahua: public Dogs{

};
int main(){

    chihuahua dogs; //here chihuahua is another class which inherited Dogs
    dogs.sleep();
    cout<<endl;
    cout<<dogs.age<<endl;   //here we can access Animal prop
    cout<<dogs.color<<endl; //here we can also access Dogs prop
}