#include<iostream>
#include<vector>
using namespace std;

//2D Array

int main(){
    //int arr[rows][coloumn]
    //index=c*i+j
    int brr[3][3]={
        {1,2,3},
        {4,5,6},
        {2,4,8} 
        }; 
    cout<<brr[0][2]<<endl<<"Row-wise print"<<endl;
    //Row-wise print
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< brr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Coloumn-wise-print"<<endl;

    //Coloumn-wise print
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< brr[j][i]<<" ";
        }
        cout<<endl;
    }

//Taking inputs
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


    
    return 0;
}