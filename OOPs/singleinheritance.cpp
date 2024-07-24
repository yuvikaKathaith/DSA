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
    
};
int main(){
    Dogs d1;
    d1.sleep();
    cout<<endl;
    cout<<d1.age;
}