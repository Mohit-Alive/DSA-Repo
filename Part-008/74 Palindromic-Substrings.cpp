#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Palindromic Substrings
// Very very important

int expandAroundIndex(string s,int i, int j){
    int count = 0;
    //jab tk match karega ,tak tk count increment krdo i piche and j aage kr do
    while(i>=0 && j<s.length() && s[i]==s[j]){
        count++;
        i--;
        j++;

    }
    return count;
}
int countSubstring(string s){
    int count = 0;
    int n= s.length();

    for(int i=0;i<n;i++){
        //odd
        int oddAns= expandAroundIndex(s,i,i);
        count = count+oddAns;

        //even
        int evenAns=expandAroundIndex(s,i,i+1);
        count = count+evenAns;
    }
    return count;
}

int main(){
    string s ="noon";
    auto a= countSubstring(s);
    cout<<a<<endl;

    
    return 0;
}