#include<iostream>
using namespace std;

int getPivot(int arr[], int size){
    int s=0;
    int e=size-1;  
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
} 
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
    cout<<"size : ";
    cin>>size;
    int key;
    cout<<"key : ";
    cin>>key;
    int arr[5];
    cout<<"array elements : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int pivot = getPivot(arr, size);

    if ((key>=arr[pivot]) && (key<=arr[size-1])){
        int result = binarySearch(arr, size, key);
        cout<<"The index at which the key is present is : "<<result;
    }
    else{
        int ans= binarySearch(arr,pivot-1,key);
        cout<<"The index at which the key is present is : "<<ans;
       
    }
}