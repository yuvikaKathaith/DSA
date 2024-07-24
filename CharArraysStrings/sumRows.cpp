#include <iostream>
using namespace std;
//to print row wise sum
void rowSum(int arr[][3], int row, int col){
    for(int row=0; row<3; row++){
        int sum=0; 
        for(int col=0; col<3; col++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
}
//to print col wise sum
void colSum(int arr[][3], int row, int col){
    for(int col=0; col<3; col++){
        int sum=0; 
        for(int row=0; row<3; row++){
            sum+=arr[row][col];       
        }
        cout<<sum<<" ";
    }   
}
int main(){
    int arr[3][3] = {{1, 2, 3}, {1, 3, 5}, {2, 4, 6}};
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    rowSum(arr,3,3);
    cout<<endl;
    colSum(arr,3,3);
}