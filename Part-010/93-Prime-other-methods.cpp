#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Return the number of prime numbers that are strictly less than n
// Square root approach

bool isPrime(int n){
    if(n<=1) return false;
    int sqrtn = sqrt(n);
    for(int i = 2; i<=sqrtn; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int countPrime(int n){
    int c =0;

    for(int i=0; i<n;i++){
        if(isPrime(i)){
            c++;
        }
    }
    return c;
}

int main(){
    int is = isPrime(80);
    int count = countPrime(80);
    cout<<count<<endl;
    cout<<is<<endl;
    
    return 0;
}