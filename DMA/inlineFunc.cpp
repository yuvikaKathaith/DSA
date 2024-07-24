#include<iostream>
using namespace std;

inline int getMax(int a,int b){    //only 1 -3 lines of code can be included in inline
    return (a>b)? a:b;
}

int main(){
    int a=1, b=2;
    int ans= 0;

    ans=getMax(a,b);
    cout<<ans<<endl;

    a+=3;
    b++;

    ans=getMax(a,b);
    cout<<ans<<endl;

    return 0;
}