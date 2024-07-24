#include<iostream>
using namespace std;

int getMax(int arr[], int size){

    int maxi=INT8_MIN;
    for(int i=0; i<size; i++){
        if (arr[i]>maxi){
            maxi=arr[i];
        }
        //OR
        //predefined function
        // maxi=max(maxi, arr[i]);
    }
    return maxi;
}
int getMin(int arr[], int size){
    
    int mini=INT8_MAX;
    for(int i=0; i<size; i++){
        if (mini>arr[i]){
            mini=arr[i];
        }
        //OR
        //predefined function
        // mini=min(mini, arr[i]);
    }
    return mini;
}

int main(){
    int size;
    cout<<"enter the size of the array : ";
    cin>>size;
    int arr[100];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"minimum of the array : "<<getMin(arr,size)<<endl;
    cout<<"maximum of the array : "<<getMax(arr,size)<<endl;

}