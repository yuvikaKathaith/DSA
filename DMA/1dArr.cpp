#include<iostream>
using namespace std;
int main(){

    // 1D array

    int n;
    cin>>n;
    int *arr= new int[n];           //right way of taking no of elements in array in runtime   
    cout<<"enter elements : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    
    }
    //releasing memory 
    
    delete []arr;

    // 2D Array with same no. of rows and column 
    
    int num;
    cin>>num;
    int **arr= new int*[num];           //right way of taking no of elements in 2d array in runtime  
    
    //creating array along every pointer 
    
    for(int i=0; i<num; i++){
        arr[i]=new int [num];
    }
    cout<<"enter elements : "<<endl;
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // releasing memory
    
    for(int i=0; i<num; i++){
        delete []arr[i];
    }
    delete []arr;

    // 2D Array with diff no. of rows and column 
    
    int rows;
    cin>>rows;
    int col;
    cin>>col;
    int **arr= new int*[rows];           //right way of taking no of elements in 2d array in runtime  
    
    //creating array along every pointer 
    
    for(int i=0; i<rows; i++){
        arr[i]=new int [col];
    }
    cout<<"enter elements : "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // releasing memory
    
    for(int i=0; i<rows; i++){
        delete []arr[i];
    }
    delete []arr;
}