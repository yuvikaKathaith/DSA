#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<arr<<endl; //address of arr
    char ch[6]= "abcde"; //6 char a,b,c,d,e,'\0'
    cout<<ch<<endl;  //prints entire string

    char *c= &ch[0];
    cout<<c<<endl;  //prints entire string 
    cout<<*(ch)+0<<endl;
    
    //if we want to print individual characeter in string
    char ch[]="hello";
    char *pntr=ch;
    cout<<ch[0]<<" "<<pntr[0]<<endl;
    cout<<ch[3]<<" "<<pntr[3]<<endl;
    cout<<ch[5]<<" "<<pntr[5]<<endl; //5th index char in the string is a null character  
    cout<<ch[4]<<" "<<pntr[4]<<endl; //compiler will not print the 4th index char as it has found the null character in above statement

    char temp='z';
    char*p=&temp;
    cout<<p<<endl; //it stops till null character is found
    
    char s[]="hello";
    char *ptr=s; 
    cout<< s[0] <<" "<< ptr[0];
    cout<< s <<" "<< ptr;



}
