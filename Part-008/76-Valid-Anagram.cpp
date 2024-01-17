#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Valid Anagram

bool isAnagram(string s, string t){
    int freqTable[256]={0};
    for(int i=0; i<s.size();i++){
        freqTable[s[i]]++;
    }

    for(int i=0; i<t.size();i++){
        freqTable[t[i]]--;
    }

    for(int i=0;i<256;i++){
        if(freqTable[i] !=0){
            return false;
        }
    }
    return true;

}

int main(){
    string s = "rat";
    string t = "car";

    string u = "anagram";
    string v = "naagarm";

    cout<<isAnagram(s,t)<<endl;
    cout<<isAnagram(u,v)<<endl;


    
    return 0;
}