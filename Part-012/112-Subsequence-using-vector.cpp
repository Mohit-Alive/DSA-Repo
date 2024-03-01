#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subseq(string str, string output, int i, vector<string> &v){
    if(i >= str.length()) {
        v.push_back(output);
        return;
    }

    subseq(str, output, i+1, v);  //Exclude

    subseq(str, output + str[i], i+1, v); //Include
}

int main(){

    string str = "abc";
    string output = "";
    int i = 0;
    vector<string> v;

    subseq(str, output, i, v);
    for(auto val: v){
        cout<<val<< " ";
    }
    
    cout<<endl<<v.size()<<endl;
    return 0;
}