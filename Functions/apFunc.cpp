#include<iostream>
using namespace std;

void AP(int num){
    int nthTerm=(3*num)+7;
    return nthTerm;
}

int main(){
    int n;
    cin>>n;
    //function call
    cout<<"The nth term is : "<<AP(n)<<endl;

}