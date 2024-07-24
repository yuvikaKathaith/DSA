#include <iostream>
using namespace std;
//When passing a two-dimensional array to a function, you must specify the number of columns as a constant when you write the 
//parameter type, so the compiler can pre-calculate the memory addresses of individual elements.
bool isPresent(int target, int arr[][4], int row, int col){
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col]==target){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {1, 3, 5, 7}, {2, 4, 6, 8}};
    int target;
    cout<<"enter target : ";
    cin>>target;
    
    if (isPresent(target,arr,3,4)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}