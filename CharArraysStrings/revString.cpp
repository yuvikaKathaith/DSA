#include<iostream>
#include<string.h>
using namespace std;


int reverseString(char string[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(string[s++],string[e--]);
    }
    for(int i=0; string[i]!='\0'; i++){
        cout<<string[i];
    }
}
int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char string[20];
    cout<<"enter string : ";
    cin>>string;
    int n=getLength(string);
    reverseString(string,n);
}