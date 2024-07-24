#include<iostream>
using namespace std;
class Human{
    public:
    int age;
    protected:
    int height;
    private:
    int weight;
    int getAge(){
        return this->age;
    }
};
class male: public Human{
    public:
    string colour;
    void sleep(){
        cout<<"sleep  called";
    }
};
int main(){
    male h1;
    cout<<h1.age<<endl; //we can access properties from human in object made in male 
    cout<<h1.height<<endl;
    cout<<h1.colour<<endl;
    h1.sleep();
}