#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int s=0, e=size-1;
    int mid = s+(e-s)/2;
    int ans=0;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){

    int size;
    cout<<"enter sie of the array : ";
    cin>>size;

    int arr[5];
    cout<<"enter elements of the array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter key : ";
    cin>>key;

    int result = firstOcc(arr, size, key);
    cout<<result<<endl;



}