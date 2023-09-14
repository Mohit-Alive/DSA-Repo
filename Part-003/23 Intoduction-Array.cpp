#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<< arr[i]<<" ";
    }
}

//******************Array******************

int main(){
    //Taking input in array
    
    //Declare
    int first[10];
    //accessing an array
    cout<<"Value at 5 index : "<<first[5]<<endl;
    cout<<"Value at 7 index : "<<first[7]<<endl;
    cout<<endl;

    //Initializing an array
    int second[5]={2,56,74,4,7};
    cout<<"value of 2 index: "<<second[2]<<endl;
    cout<<"value of 4 index: "<<second[4]<<endl;
    cout<<endl;

    int third[10]={8,5};
    int n=10;
    cout<<"Printing the array Third"<<endl;
    //Print the array
    for(int i=0; i<n;i++){
        cout<<third[i]<<" ";
    }
    cout<<endl<<endl;

    int fourth[10]={0};
    printArray(fourth,10);
    
    cout<<endl<<endl;

    int fifth[10];
    fill_n(fifth,10,2);
    printArray(fifth,10);

    cout<<endl<<endl;

    int sixth[5];
    for(int i=0;i<10;i++){
        cin>>sixth[i];
    }
    cout<<"Printing thr values in array"<<endl;
    printArray(sixth,5);
    cout<<endl<<endl;
    

    
    return 0;
}