#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Remove Occurences

string removeOccurences(string s, string part){
    int pos= s.find(part);
    while(pos != string::npos){
        s.erase(pos,part.length());
        pos= s.find(part);
    }
    return s;
}

// Valid Pallindrome ||

bool checkPalindrome(string s,int i, int j){
    while(i<=j){
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(string s){
    int i=0;
    int j=s.length()-1;

    while(i<=j){
        if(s[i] !=s[j]){
            //ek baar i remove , ek baar j remove
            return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
        }
        else{
            //s[i]==s[j]
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    string s="abcabababcbc";
    string part="abc";

    string a= removeOccurences(s,part);
    cout<<s<<endl;
    cout<<a<<endl;

    string b ="aba";
    string c ="abcdef";
    cout<<validPalindrome(b)<<endl;
    cout<<validPalindrome(c)<<endl;
    
    return 0;
}