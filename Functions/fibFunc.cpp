#include<iostream>
using namespace std;

int fib(int num){
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<num; i++){
        int c=a+b; 
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return a ;
}

int main(){
    int n;
    cin>>n;
    //function call
    cout<<endl<<"The "<<n<<" term is : "<<fib(n)<<endl;
    return 0;
}