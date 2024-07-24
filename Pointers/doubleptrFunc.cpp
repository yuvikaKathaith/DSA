#include<iostream>
using namespace std;
void update(int **p2){
    p2=p2+1; //no change 
    *p2=*p2+1; // address of p1 changes
    **p2=**p2+1; //value of i changes
}
int main(){
    int i=5;
    int *p1=&i;
    int**p2=&p1;
    cout<<"before update"<<endl;
    cout<<i<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<"after update"<<endl;
    cout<<i<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
}