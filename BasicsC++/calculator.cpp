#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a : ";
    cin>>a;
    cout<<endl;
    cout<<"enter the value of b : ";
    cin>>b;
    cout<<endl;

    char choice(1-5);
    cout<<"enter the operation that you need to perform : ";
    cin>>choice;
    cout<<endl;

    switch(choice){
        case '+':
        //sum
        cout<<a+b<<endl;
        break;

        case '-':
        //diff
        cout<<a-b<<endl;
        break;

        case '*':
        //prod
        cout<<a*b<<endl;
        break;

        case '/':
        //div
        cout<<a/b<<endl;
        break;

        case '%':
        //rem
        cout<<a%b<<endl;
        break;
    }
}
