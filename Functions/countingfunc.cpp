#include<iostream>
using namespace std;

void printCounting(int n){
    //function body
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
}

int main(){
    int num;
    cin>>num;
    //function call
    printCounting(num);
    return 0;
}