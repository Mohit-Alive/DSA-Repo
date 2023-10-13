#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Remove Duplicates

string removeDup(string s){
    string ans="";
    int i=0;

    while(i<s.length()){

        if(ans.length()>0){

            if(ans[ans.length()-1]==s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        else{
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}
int main(){
    string s="azxxzy";
    string b="abbaca";

    string t=removeDup(b);
    string a= removeDup(s);

    cout<<a<<endl;
    cout<<t<<endl;

    
    return 0;
}