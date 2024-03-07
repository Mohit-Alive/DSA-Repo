#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void RemoveOcc(string &s, string &part){

    int found = s.find(part);

    if(found != string::npos){

        string left = s.substr(0, found);
        string right = s.substr(found + part.size(), s.size());
        s = left + right;

        RemoveOcc(s, part);
    }
    else{
        return;
    }
}

int main(){
    
    string s = "daabcbaabcbc";
    string part = "abc";

    RemoveOcc(s, part);
    cout<<"New string is: "<<s<<endl;

    return 0;
}