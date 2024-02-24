#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Fibonacci Series (nth element)

int fib(int n){
    // if(n==0 || n==1) return n;   // Base case
    if(n==1) return 0;
    if(n==2) return 1;

    return fib(n-1) + fib(n-2);  // Recursive Relation
}

// Factorial

int fact(int n){
    if(n==0 || n==1) return 1;   // Base Case

    
    return n * fact(n-1);
}

//Power of 2

int pow(int n){
    if(n==1) return 2;  // Base case

    return 2*pow(n-1);
}

// Normal Counting      (Head Recursion)

void norcount(int n){
    if(n == 0) return;  // Base case
    norcount(n-1);      // Recursive relation
    cout<<n<<" ";       // Processing
}
// Reverse Counting     (Tail Recursion)

void count(int n){
    if(n == 0) return;  // Base case
    cout<<n<<" ";       // Processing
    count(n-1);         // Recursive relation
}

int main(){
    int f = fact(5);
    cout<<endl<<"The factorial of 5 is: "<<f<<endl;   

    int fibo = fib(7);
    cout<<"The 7th Element of fibonacci series is: "<<fibo<<endl;
//     int i=0;
//     while(i < 7) {
//       cout << " " << fib(i);
//       i++;
//    }
//    cout<<endl;

    int power = pow(5);
    cout<<"2 to the power 5 is: "<<power<<endl;

    cout<<endl<<endl<<"Counting: ";
    norcount(10);
    cout<<endl<<"Reverse Counting: ";
    count(10);

    return 0;
}