#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v, int s, int e, int &key){
    if(s>e) return -1;

    int mid = (s+e)/2;

    if(v[mid] == key) return mid;

    return (v[mid] < key) ? binarySearch(v, mid+1, e, key) : binarySearch(v, s, mid-1, key);

    // if(v[mid]<key) return binarySearch(v, mid+1, e, key);
    // else return binarySearch(v, s, mid-1, key);
}

int main(){

    vector<int> v{10,20,30,40,50,60,70};
    int target = 50;
    int n = v.size();
    int s=0;
    int e = n-1;

    int ans = binarySearch(v, s, e, target);
    cout<<"Answer is: "<< ans<<endl;     
    return 0;
}