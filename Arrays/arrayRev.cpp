#include<iostream>
using namespace std;

void arrayReverse(int arr[], int size){
    //reversing the array
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    //reversed array
    cout<<endl<<"array after reversing"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    } 
}

int main(){
    int size;
    cout<<"enter size of the array : ";
    cin>>size;

    int arr[5];
    //taking elements of the array as input
    cout<<"enter elements of the array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"array before reversing"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    //calling the function
    arrayReverse(arr,size);
}