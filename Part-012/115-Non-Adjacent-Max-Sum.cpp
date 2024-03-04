#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Maximum Sum of Non-Adjacent Element

void solve(vector<int> &arr, int i, int sum, int &maxi){

    if(i >= arr.size()) {
        maxi = max(sum, maxi);
        return;
    }

    solve(arr, i+2, sum+arr[i], maxi);  //Include
    solve(arr, i+1, sum, maxi);  //Exclude
}

int main(){

    vector<int> arr{2,1,4,9};
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;

    solve(arr, i, sum, maxi);
    cout<<"Maximum Sum is: "<< maxi<<endl;

    
    return 0;
}