#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Important

void subseq(string &str, string output, int i){

    if(i >= str.length()) {
        cout<<output<<endl;
        return;
    }

    subseq(str, output, i+1);  //Exclude

    subseq(str, output + str[i], i+1); //Include
}

int main(){
    string str = "abc";
    string output = "";
    int i = 0;

    subseq(str, output, i);

    return 0;
}