#include <iostream>
using namespace std;

int main()
{
        int a[5];
        int *ptr;
        cout << sizeof(a) << "-" << sizeof(*ptr) << endl; // 5*4 - 4

        int arr[5];
        cout << arr << "-" << &arr[0] << endl; // an array is a pointer to the first element of that array

        int ar[10] = {2, 5, 6};
        cout << *ar << endl; // this array 'ar' holds the address of the first element i.e. 2 and *ar prints the value at ar i.e 2
        cout << *ar + 1 << endl;
        cout << *ar << " " << *(ar + 1) << " " << *(ar + 2) << endl;

        cout << ar[1] << " " << *(ar + 1) << endl;  // arr[i]=*(arr+i)
        cout << 1 [ar] << " " << *(ar + 1) << endl; // i[arr]=*(arr+i) 
        
        // int a[]={1,2,3,4};
        // a = a+1;  //cannot change value of array by adding this
        // cout<<a<<endl;

        char s[]="hello";
        char*p=s;
        cout<<s[0]<<" "<<p[0];
}