#include<iostream>
using namespace std;

//1->prime
//0->not prime
bool isPrime(int num){
    for(int i=2; i<num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    //function call
    isPrime(n);
    if(isPrime(n)){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
}
