#include <iostream>
using namespace std;
//to print row wise sum
int maxi=INT8_MIN;
int rowNumber=0;
int MaxrowSum(int arr[][3], int row, int col){
    for(int row=0; row<3; row++){
        int sum=0; 
        for(int col=0; col<3; col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowNumber=row;
        }
    }
    cout<<"maximum sum : "<<maxi<<endl;
    return rowNumber+1;
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
    int rowNum=MaxrowSum(arr,3,3);
    cout<<"row number : "<<rowNum;
}