#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void lastRTL(string &s, char x, int i, int &ans ){

    if(i < 0) return;

    if(s[i] == x) {
    ans = i ;
    return;
    }

    lastRTL(s, x, i-1, ans);
}

int main(){
    
    string s = "abcdeffde";
    char x = 'e';
    int ans = -1;
    int i = 0;

    lastRTL(s, x, s.size() -1 , ans);
    cout<<ans<<endl;

    return 0;
}