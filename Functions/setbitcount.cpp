#include<iostream>
using namespace std;

int bitCount(int num1, int num2){
    int count=0;

    while(num1!=0){
        int bit=(num1&1);
        if (bit==1){
            count++;
        }
        num1>>=1;
    }
    while(num2!=0){
        int bit=(num2&1);
        if (bit==1){
            count++;
        }
        num2>>=1;
    }
    return count;
}


int main(){
    int a,b;
    cout<<"enter a and b : ";
    cin>>a>>b;
    //function call
    cout<<"The total number of set bits in "<<a<<" and "<<b<<" are : "<<bitCount(a,b)<<endl;
}
