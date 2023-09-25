#include<iostream>
using namespace std;

//Transpose of 2D Array

void transpose(int arr[][3],int r,int c,int transArr[][3]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            transArr[j][i]=arr[i][j];

        }
    }
}
void printArray(int arr[][3],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=3;
    printArray(arr,rows,cols);
    cout<<endl;
    
    int transArr[3][3];
    transpose(arr,rows,cols,transArr);
    printArray(transArr,rows,cols);
    
    return 0;
}