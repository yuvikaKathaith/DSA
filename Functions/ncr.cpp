#include<iostream>
using namespace std;
//ncr program
//ncr = n!/(r!(n-r)!)
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n, int r){
    int num = factorial(n);
    int denom = factorial(r)*factorial(n-r);
    return num/denom;
}
int main(){
    int a,b;
    cout<<"enter a and b: ";
    cin>>a>>b;
    int result=nCr(a,b);    
    cout<<result<<endl;
}
