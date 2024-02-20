#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void util(int* ptr){
    //p = p + 1;
    *ptr = *ptr + 1;
    // **ptr = **ptr +1;    for two pointer
}


int main(){
    int a = 5;
    int *p = &a;

    cout<<"Before"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;

    util(p);

    cout<<endl<<"After"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;

    return 0;
}