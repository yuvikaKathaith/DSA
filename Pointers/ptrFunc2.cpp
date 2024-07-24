#include <iostream>
using namespace std;

void swap(char *x,char *y){
    char *t=x;
    x=y;
    y=t;
    cout<<"1 "<<x<<" "<<y<<endl; //yaha pe iss func me swap karne se main func me x y swap nahi honge 
}
int main()
{
    char *x= "well";
    char *y= "helloo";
    char *t;
    swap(x,y);
    cout<<"2 "<<x<<" "<<y<<" "<<endl; // yaha x y same print honge
    t=x;
    x=y;
    y=t;
    cout<<"3 "<<x<<" "<<y<<endl; //ab swap ho jayenge 
}
