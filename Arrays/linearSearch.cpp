#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i=0; i<=size; i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int size;
    cout<<"enter the size of the array : ";
    cin>>size;
    int arr[100];
    cout<<"enter the elemnts of the array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the element that you need to find : ";
    cin>>key;

    int result=linearSearch(arr,size,key);
    if(result){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
}