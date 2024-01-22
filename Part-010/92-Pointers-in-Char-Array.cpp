#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Char Array
// char only in single quote
// string only in double quote

void solve(int arr[]){
    cout<<"Size inside solve function: "<< sizeof(arr)<<endl;
}

void update(int*p){
    *p=*p+10;
}

int main(){
    char ch[10]= "Mohit";
    char*c= ch;

    cout<< ch <<endl;
    cout<< &ch <<endl;
    cout<< ch[0] <<"\n"<<endl;
    
    cout<< &c <<endl;
    cout<< *c <<endl;
    cout<< c <<"\n"<<endl;   // char pointer is different from integer pointer

    char name[9] = "SherBano";
    char*ca = &name[0];

    cout<< name <<endl;
    cout<< &name <<endl;
    cout<< *(name+3) <<endl;
    cout<< ca <<endl;
    cout<< &ca <<endl;
    cout<< *(ca+3) <<endl;
    cout<< ca+2 <<endl; //2nd index se puri string print ho jayegi
    cout<< *ca <<endl;
    cout<< ca+6 <<"\n"<<endl;

    char mn = 'k';
    char* cptr = &mn;

    cout<<cptr<<endl; //garbage value after k

    int brr[10] = {1,2,3,4};
    cout<<"Size inside main function: "<<sizeof(brr)<<endl;
    solve(brr);  //array pass by reference
    cout<<"\n"<<endl;

    int a=5;
    int*ptr = &a;
    update(ptr);
    cout<<"value of a is: "<<a<<endl;


    
    return 0;
}