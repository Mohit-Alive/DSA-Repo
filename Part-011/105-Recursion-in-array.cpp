#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Printing of Array
void printarr(int arr[], int n, int i){
    if(i>=n) return;

    cout<<arr[i]<<" ";
    printarr(arr, n, i+1);
}

// Reverse Array
void revarr(int arr[], int n, int i){
    if(i>=n) return;

    revarr(arr, n, i+1);
    cout<<arr[i]<<" ";
}

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int n= 5;
    int i = 0;
    printarr(arr, n, i);
    cout<<endl;
    revarr(arr, n, i);
    
    return 0;
}