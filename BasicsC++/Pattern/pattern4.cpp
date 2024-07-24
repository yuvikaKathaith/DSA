#include<iostream>
using namespace std;
//3 2 1
//3 2 1
//3 2 1
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=3;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }

    // OR
    
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
}