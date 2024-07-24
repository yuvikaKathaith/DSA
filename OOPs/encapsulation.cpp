#include<iostream>
using namespace std;

class Student {
    private:    //encpsulation
        string name;
        int age;
        int height;

    public:
    int getAge() {
        return this->age;
    }
};

int main() {
    Student first;
    cout << "Sab sahi chalra hai" << endl;
    return 0;
}