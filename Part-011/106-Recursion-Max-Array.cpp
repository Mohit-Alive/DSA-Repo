#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findMax(int arr[], int n, int i, int &maxi){ // Reference variable
    if(i>=n) return;

    if(arr[i] > maxi){
        maxi = arr[i]; 
    }
    
    findMax(arr, n, i+1, maxi);
}

int main(){
    
    int arr[] = {10, 45, 48, 78, 26, 12};
    int n = 6;
    int maxi = INT_MIN;
    int i= 0;

    findMax(arr, n , i, maxi);
    cout<<"Maximum number is: "<<maxi<< endl; 

    return 0;
}