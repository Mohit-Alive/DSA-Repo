#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n){
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;

    for(int i=2; i*i<=n; i++){
        if(prime[i]){

            int j=i*i;
            while(j<=n){
                prime[j]= false;
                j+=i;
            }
        }
    }
    return prime;
}

int main(){
    vector<bool>Sieve = sieve(25);
    for(int i = 0;i<=25; i++){
        if(Sieve[i]){
            cout<<i<<" ";
        }
    }
    
    return 0;
}