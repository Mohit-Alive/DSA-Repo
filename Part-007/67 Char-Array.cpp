#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Char Array

int getlength(char name[]){
    int length=0;
    int i=0;

    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

int main(){
    // char name[100];
    // cout<<"Enter your name: ";
    // cin>>name;
    // cout<<"Your name is: "<<name<<endl;
    // name[5]= ' ';
    // name[6]= 'z';
    // cout<<name<<endl;

    char naam[100];
    cin>>naam;
    for(int i=0;i<6;i++){
        cout<<"index: "<<i<<" value: "<<naam[i]<<endl;
    }
    int value=(int)naam[5];
    cout<<"Value is: "<<value<<endl;

    // char fullName[100];
    // cin.getline(fullName,50);
    // cout<<fullName<<endl;

    char name[100];
    cin>> name;

    cout<<"Length is: "<<getlength(name)<<endl;
    cout<<"Length is: "<<strlen(name)<<endl;

    return 0;
}