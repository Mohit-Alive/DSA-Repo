#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Longest Palindromic Substring

bool isPalindrome(string&s, int start, int end){
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++,end--;
    }
    return true;
}

string longestPalindrome(string s){
    string ans="";

    for(int i=0;i<s.size();i++){
        for(int j=1;j<s.size();j++){
            if(isPalindrome(s,i,j)){
                string t=s.substr(i,j-i+1);
                ans=t.size()>ans.size() ? t:ans;
            }

        }
    }
    return ans;
}

int main(){
    string s="babad";
    string t="cbbd";

    cout<<longestPalindrome(s)<<endl;
    cout<<longestPalindrome(t)<<endl;
    
    return 0;
}