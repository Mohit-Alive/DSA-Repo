#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Reverse vowels of a string 

bool isVowel(char ch){
    ch= tolower(ch);
    return ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u';
}

string reverseVowel(string s){
    int l=0, h= s.size()-1;

    while(l<h){
        if(isVowel(s[l]) && isVowel(s[h])){
            swap(s[l],s[h]);
            l++,h--;
        }
        else if(isVowel(s[l])==0){
            l++;
        }
        else{
            h--;
        }
    }
    return s;
}

int main(){
    string s="leetcode";
    string t="hello";

    cout<<reverseVowel(s)<<endl;
    cout<<reverseVowel(t)<<endl;
    
    return 0;
}