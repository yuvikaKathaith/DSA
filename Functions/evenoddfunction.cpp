#include<iostream>
using namespace std;

//1-> even
//0-> odd
bool isEven(int a){
    //odd
    if (a&1){
        return 0;
    }
    return 1;
}


int main(){
    int num;
    cin>>num;
    isEven(num);
    cout<<isEven(num)<<endl;
}
