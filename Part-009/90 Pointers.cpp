#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Pointers

int main(){

    int a = 10;
    int* p = &a;
    int* q = p;
    int* r = q;

    cout<< a << endl;
    cout<< &a << endl;
    cout<< p << endl;
    cout<< &p << endl;
    cout<< *p << endl;
    cout<< q << endl;
    cout<< &q << endl;
    cout<< *q << endl;
    cout<< r << endl;
    cout<< &r << endl;
    cout<< *r << endl;
    cout<< (*p + *q + *r) << endl;
    cout<< (*p)*2 + (*r)*3 << endl;


    // // BAD PRACTICE
    // int* ptr;
    // //instead use Null Pointer
    // int* ptr =0;            This
    // int* ptr = nullptr;     Or This
    
    return 0;
}