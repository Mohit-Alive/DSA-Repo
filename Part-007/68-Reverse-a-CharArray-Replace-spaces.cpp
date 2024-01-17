#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Reverse a String

void reverseChar(char name[]){
    int i = 0;
    int n = strlen(name);
    int j = n-1;

    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}

// Replace spaces

void replaceSpaces(char sentance[]){
    int i=0;
    int n=strlen(sentance);

    for(int i=0;i<n;i++){
        if(sentance[i]==' '){
            sentance[i]='#';
        }
    }
}


int main(){
    char name[100]="Mohit";
    
    cout<<"Initially: "<<name<<endl;
    reverseChar(name);
    cout<<"Reverse: "<<name<<endl;
    
    char sentence[100];
    cin.getline(sentence,100);

    replaceSpaces(sentence);
    cout<<"Printing Sentence: "<<endl<<sentence<<endl;
    return 0;
}