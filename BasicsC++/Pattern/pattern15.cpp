#include<iostream>
using namespace std;
//A
//B C 
//C D E 
//D E F G 

int main(){
    int n;
    cin>>n;
    int i=1;
    char ch = 'A';
    while(i<=n){
        int j=1;
        while(j<=i){
            ch='A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}