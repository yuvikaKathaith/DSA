#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    // int mid=(start+end)/2; 
    //after optimization
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right wala part
        if(key>arr[mid]){
            start=mid+1;
        }
        //go to left wala part
        else{
            end=mid-1;
        }
        // mid=(start+end)/2;
        mid=start+(end-start)/2;
    }
    return -1;
           
}

int main(){
    int size;
    cout<<"enter the size of the array : ";
    cin>>size;
    
    int arr[100];
    cout<<"enter the elements of the array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter key : ";
    cin>>key;
    
    cout<<"index at "<<key<<" is "<<binarySearch(arr,size,key)<<endl;
    
}