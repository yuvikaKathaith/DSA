#include<iostream>
using namespace std;

int sumArray(int arr[], int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }    
    return sum;
}

int main(){
    int size;
    cout<<"enter the size of the array : ";
    cin>>size;
    int arr[100];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int result=sumArray(arr,size);
    cout<<"the sum of the elements of array is : "<<result<<endl;
}