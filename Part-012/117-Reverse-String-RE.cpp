#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(string &s, int start, int end){

    if(start >= end) return;

    swap(s[start], s[end]);
    reverse(s, start + 1, end - 1);
}

int main(){

    string s = "Mohit";
    reverse(s, 0, s.size() -1);

    cout<<s<<endl;
    
    return 0;
}