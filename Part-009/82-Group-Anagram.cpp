#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Group Anagram 

std::array<int,256> hash(string s){  // Another method to write hash map
    std::array<int,256>hash={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    return hash;

}
vector<vector<string>> groupAnagram(vector<string>& strs){
    map<std::array<int,256>, vector<string>> mp;

    for(auto str:strs){
        //mp[hash(str)].push_back(str);
    }

    vector<vector<string>>ans;
    for(auto it=mp.begin(); it!=mp.end();it++){
        ans.push_back(it->second);
    }
    return ans;
}

int main(){
    
    return 0;
}