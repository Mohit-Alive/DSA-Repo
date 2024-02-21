#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(int &num){
    num = 50;
}

int main(){
    int a = 5;
    int &b = a;  //b is a reference variable

    cout<<a<<endl;
    cout<<b<<endl;
    a++;
    cout<<a<<endl;
    cout<<b<<endl;
    b++;
    cout<<a<<endl;
    cout<<b<<endl;

    cout<<"\nSolve func"<<endl;
    solve(a);
    cout<<a<<endl;

    return 0;
}