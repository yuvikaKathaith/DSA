#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        cout<<i<<endl;
        sum=sum+i;
        i++;
    }
    cout<<"The sum is : "<<sum<<endl;

}