#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// String'

bool  compareString(string a,string b){
    if(a.length()!=b.length())
        return false;
    else{
    
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i]){
                return false;
            }
            
        }

    }
    return true;
}

int main(){
    string str;
    str="Mohit";
    cout<<str<<endl;
    cout<<"Length: "<<str.length()<<endl;

    cout<<"isEmpty: "<<str.empty()<<endl;

    str.push_back('A');
    cout<<str<<endl;

    str.pop_back();
    cout<<str<<endl;

    cout<<str.substr(0,4)<<endl; //important

    string str1= "Hello";
    string str2="Hello";

    if(str1.compare(str2)==0){
        cout<<"Exactly same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }

    auto a = compareString(str1,str2);
    cout<<a<<endl;


    string s="Hello how are you";
    string target= "are";
    cout<<s.find(target)<<endl; 


    string n="This is first Message";
    string m="Mohit";
    n.replace(0,4,m);
    cout<<n<<endl;

    string x="This is my name";
    x.erase(0,4);
    cout<<x<<endl;

    
    return 0;
}