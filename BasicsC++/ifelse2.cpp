#include<iostream>
using namespace std;
int main(){
    char character;
    cout<<"Enter a character "<<endl;
    cin>>character;
    if(islower(character)){
        cout<<"Lower case"<<endl;
    }
    else if(isupper(character)){
        cout<<"Upper case"<<endl;
    }
    else{
        cout<<"Numeric"<<endl;
    }
}
