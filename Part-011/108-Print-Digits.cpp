#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printDigits(int n){
    if(n == 0) return;

    int digit = n%10;
    cout<<digit<<" ";
    int newVal = n/10;

    printDigits(newVal);
}

void revDigits(int n){
    if(n == 0) return;

    int newVal = n/10;
    revDigits(newVal);
    int digit = n%10;
    cout<<digit<<" ";

}

int main(){
    int n = 7896;
    printDigits(n);
    cout<<endl;
    revDigits(n);
    
    return 0;
}