#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//gcd(a,b) = gcd(a-b, b)  a>b
//gcd(a,b) = gcd(b-a, a)  a<b

//gcd(a.b) = gcd(a%b, b)  a>b 

//lcm(a,b) * gcd(a,b) = a*b

int gcd(int a , int b){
    if(a==0) return b;
    if(b==0) return a;

    while(a>0 && b>0){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a == 0 ? b:a;
}

int main(){
    int hcf = gcd(16,8);
    cout<<hcf<<endl;
    
    return 0;
}