#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 5;
    int *p = &a;
    int ** q = &p;

    cout<<"*****A*****"<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    cout<<"\n*****P*****"<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    cout<<"\n*****Q*****"<<endl;
    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;

    return 0;
}