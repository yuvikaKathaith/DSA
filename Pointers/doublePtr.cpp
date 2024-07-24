#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    cout << i << " " << *ptr1 << " " << **ptr2 << endl; //value of i-value pointed by ptr1
    cout << ptr1 << " " << &i << " " << *ptr2 << endl; //address stored in ptr1 of i
    cout<< &ptr1 << " " << ptr2 << " " <<endl; //address of ptr1
}