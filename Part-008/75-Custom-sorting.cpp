#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Custom sorting

bool cmp(char first, char second){
    return first>second;
}


int main(){
    string s="mohit";
    sort(s.begin(),s.end());
    cout<<s<<endl;

    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;

    vector<int> v{5,2,3,4,1};
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end(),cmp);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}