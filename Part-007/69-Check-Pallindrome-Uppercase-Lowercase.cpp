#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Pallindrome
 
bool check(char word[]){
    int i=0;
    int n=strlen(word);
    int j= n-1;

    while(i<=j){
        if(word[i]!=word[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

//Uppercase
void convertUpper(char arr[]){
    int n=strlen(arr);

    for(int i=0;i<n;i++){
        arr[i]=arr[i]-'a'+'A';   //Important

    }
}

//Lowercase
void convertLower(char arr[]){
    int n=strlen(arr);

    for(int i=0;i<n;i++){
        arr[i]=arr[i]-'A'+'a';   //Important

    }
}


int main(){
    char arr[100]="nitin";
    cout<<"Palindrome Check: "<<check(arr)<<endl;

    convertUpper(arr);
    cout<<arr<<endl;

    char brr[100]="MOHIT";
    convertLower(brr);
    cout<<brr<<endl;

    
    return 0;
}