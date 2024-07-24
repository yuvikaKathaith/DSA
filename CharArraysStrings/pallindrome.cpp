#include<iostream>
#include<string.h>
using namespace std;


bool palindrome(char string[],int n){
    
    int s=0;
    int e=n-1;
    while(s<=e){
        if(string[s]!=string[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int getLength(char string[]){
    int count = 0;
    for(int i=0; string[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char string[20];
    cout<<"enter string : ";
    cin>>string;
    int len=getLength(string);
    cout<<"length "<<len<<endl;;
    cout<<"palindrome or not : "<<palindrome(string,len);
   
}