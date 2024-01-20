#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Find the index of first occurence    

int strStr(string a, string b){
    int n= a.size();
    int m = b.size();

    for(int i=0; i<=n-m; i++){

        for(int j=0; j<m; j++){
            if(b[j] != a[i+j]){
                break;
            }
            if(j==m-1){
                return i;
            }
        }
    }
    return -1;
}
int main(){
    string a ="leetcode";
    string b="leeto";

    string c="mohit";
    string d="hit";

    cout<<strStr(a,b)<<endl;
    cout<<strStr(c,d)<<endl;

    
    return 0;
}