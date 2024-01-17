#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Isomorphic Strings

bool isIsomorphic(string s , string t){
    int hash[256]={0};
    bool ischarMapped[256]={0};

    for(int i=0;i<s.size();i++){
        if (hash[s[i]]==0 && ischarMapped[t[i]]==0){
            hash[s[i]]= t[i];
            ischarMapped[t[i]]= true;
        }
    }
    for(int i=0;i<s.size();i++){
        if(char(hash[s[i]]) != t[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "egg";
    string t = "add";

    string u = "foo";
    string v = "bar";

    string w = "paper";
    string x = "title";

    cout<<isIsomorphic(s,t)<<endl;
    cout<<isIsomorphic(u,v)<<endl;
    cout<<isIsomorphic(w,x)<<endl;

      
    return 0;
}