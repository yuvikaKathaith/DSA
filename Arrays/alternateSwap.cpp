#include<iostream>
using namespace std;

void alternateSwap(int arr[], int size){
    //reversing the array alternatively
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    //printing alternate reversed array
    cout<<endl<<"array after alternate reversing"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    } 
}

int main(){
    int size;
    cout<<"enter size of the array : ";
    cin>>size;

    int arr[100];
    //taking elements of the array as input
    cout<<"enter elements of the array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"array before alternate reversing"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    //calling the function
    alternateSwap(arr,size);
}