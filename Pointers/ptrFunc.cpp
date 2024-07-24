#include <iostream>
using namespace std;

void print(int *p)
{
    cout << p << endl;
    cout << *p << endl;
}
void update(int *p)
{
    //address update
    p = p + 1;
    cout << p << endl;
    //value udate
    (*p)++;
    cout << *p << endl;    
}
int main()
{
    int a = 5;
    int *ptr = &a;
    // print(ptr);
    cout <<"before ptr "<< ptr << endl;  
    cout <<"before *ptr "<< *ptr << endl;
    update(ptr);
    cout <<"after ptr "<< ptr << endl; //after update in other function address does not change in main function 
    cout <<"after *ptr "<< *ptr << endl; //after update in other function value changes in main function 
}
