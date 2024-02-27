#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool checkKey(string &str, int i, int &n, char &key){
    if(i>=n) return false;

    if(str[i] == key) return true;
    return checkKey(str, i+1, n, key);
}

void countKey(string &str, int i, int &n, char &key){
    if(i>=n) return;

    if(str[i] == key){
        cout<<"Found at: "<<i<<endl;
    } 
    countKey(str, i+1, n, key);
}

void vecKey(string &str, int i, int &n, char &key, vector<int> &anss){
    if(i>=n) return;

    if(str[i] == key){
        anss.push_back(i);
    } 
    vecKey(str, i+1, n, key, anss);
}

int main(){

    string str = "mohitkholiya";
    int n = str.length();
    int i = 0;
    char key = 'n';
    char keys = 'o';

    bool ans = checkKey(str, i, n, key);
    cout<<"Answer is: "<<ans<<endl;
    
    countKey(str, i , n, keys);

    vector<int> anss;
    vecKey(str ,i , n, keys, anss);
    for(auto val: anss){
        cout<< val<< " ";
    }
    cout<<endl;

    return 0;
}