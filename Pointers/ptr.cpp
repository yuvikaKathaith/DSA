#include<iostream>
using namespace std;

int main(){
    
    int num=5;
    //pointer declare // &--> address operator ; *--> value of pointer variable
    int *ptr = &num;                                    // ptr is a pointer to int
    cout<<"address of num stored in ptr is : "<<ptr<<endl;
    cout<<"value at ptr is : "<<*ptr<<endl;
    
    //another way of declaring ptr 
    char *pntr=0;                                      //first initilaise pntr with 0  
    char ch='a';
    pntr = &ch;                                         // then assign address to it
    cout<<"address of a stored in pntr is : "<<pntr<<endl;
    cout<<"value at pntr is : "<<*pntr<<endl;
    //size 
    cout<<"size of num : "<<sizeof(num)<<endl;
    cout<<"size of ptr : "<<sizeof(ptr)<<endl;

    //changes in variable 
    int n=2;
    int *potr=0;
    potr=&n;
    cout<<*potr<<endl; //2
    (*potr)++;    //3                 //changes to the ptr changes the overall value of the variable to which it is pointing cause it ptr has n's address
    cout<<*potr<<endl; //3
    cout<<n<<endl; //3        n also changes 

    //let us try one more thing
    int a=n; //a=2
    cout<<a<<endl; //2
    a++; //2+1=3
    cout<<a<<endl; //3 
    cout<<n<<endl; //2 num does not changes cause does not have n's address

    //copying a ptr to ptr
    int *q=potr;
    cout<<*potr<<"-"<<*q<<endl; //3-3
    cout<<potr<<"-"<<q<<endl; 
}