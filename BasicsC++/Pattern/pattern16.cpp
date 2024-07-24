#include<iostream>
using namespace std;
//D
//C D
//B C D  
//A B C D  

int main(){
    int n;
    cin>>n;
    int i=1;
    char ch;
    while(i<=n){
        int j=1;
        while(j<=i){
            ch='A'+n-i+j-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}