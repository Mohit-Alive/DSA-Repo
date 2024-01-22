#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[4]={12,78,98,67};

    cout<< arr[0] <<endl;
    cout<< arr <<endl;
    cout<< &arr <<endl;
    cout<< &arr[0] <<"\n"<<endl;
    
    int*p =arr;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<"\n"<<endl;

    cout<< *arr <<endl;
    cout<< *arr+1 <<endl;
    cout<< *(arr+1) <<endl;
    cout<< *(arr+2) <<endl;

    int i= 0;
    cout<< arr[i] <<endl;
    cout<< i[arr] <<endl;

    cout<<sizeof(arr)<<endl; //Total space taken by array
    cout<<sizeof(p)<<endl; // Total space taken by pointer 

    // arr=arr+1 Constant pointer but we can do p=p+1
    return 0;
}