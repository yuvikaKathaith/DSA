#include<iostream>
using namespace std;
//euclid's algo
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>0){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"enter a and b : ";
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<"the gcd is of "<<a<<" and "<<b<<" is : "<<ans<<endl;
}