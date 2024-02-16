#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Sieve Approach

int countPrime(int n){
    if(n == 0) return 0;

    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    int ans = 0;

    for(int i=2; i<n; i++){
        if(prime[i]){
            ans++;

            int j=2*i;
            while(j<n){
                prime[j]= false;
                j+=i;
            }
        }
    }
    return ans;
}

int main(){

    int count = countPrime(80);
    cout<<count<<endl;
    
    return 0;
}