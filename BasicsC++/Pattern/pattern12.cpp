#include<iostream>
using namespace std;
//A B C D
//E F G H 
//I J K L
//M N O P
int main(){
    int n;
    cin>>n;
    int i=1;
    char cha='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<cha<<" ";
            cha++;
            j++;
        }
        cout<<endl;
        i++;
    }
}