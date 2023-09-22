#include<iostream>
#include<limits.h>
using namespace std;

//*************Linear Search in 2D Array**************

bool findKey(int arr[][2],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key)
            return true;
        }
    }
    return false;
}
//***************Max-Min in 2D Array**************

// Max function
int getMax(int arr[][2],int rows,int cols){
    int max=INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }

    }
    return max;
}

// Min function
int getMin(int arr[][2],int rows,int cols){
    int min=INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }

    }
    return min;
}


int main(){
    int arr[2][2];
    int rows= 2;
    int cols=2;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>> arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<< arr[i][j]<<" ";
        
        }
        cout<<endl;

    }
    cout<<endl;

    int key=12;
    if(findKey(arr,2,2,key)){
        cout<<"Key exist: "<<"True"<<endl;

    }
    else{
        cout<<"Key exist: "<<"False"<<endl;
    }
    cout<<endl;

    cout<<"Maximum value: "<<getMax(arr,rows,cols)<<endl;
    cout<<"Minimum value: "<<getMin(arr,rows,cols)<<endl;

    
    return 0;
}