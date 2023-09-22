#include<iostream>
using namespace std;

//*****************Row Wise Sum*********************

void printRowWiseSum(int arr[][2],int rows,int cols){
    cout<<"Printing row wise sum"<<endl;
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum = sum+arr[i][j];
        }
        cout<<sum<<endl;
    }

}

int main(){
    int arr[2][2];
    int rows= 2;
    int cols=2;

    //Row wise
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
    printRowWiseSum(arr,rows,cols);
    return 0;
}