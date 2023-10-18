#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Largest Common Prefix 

string longestCommonPrefix(vector<string>& strs){
    string ans;
    int i=0;
    while(true){
        char curr_char=0;
        for(auto str:strs){
            if(i>=str.size()){
                //out of bounds
                curr_char=0;
                break;
            }
            //just started
            if(curr_char==0){
                curr_char=str[i];

            }
            else if(str[i]!=curr_char){
                curr_char=0;
                break;
            }
        }
        if(curr_char==0){
            break;
        }
        ans.push_back(curr_char);
        i++;
    }
    return ans;

}

int main(){
    vector<string>str {"flower","flow","flight"};
    cout<<longestCommonPrefix(str)<<endl;

    
    return 0;
}