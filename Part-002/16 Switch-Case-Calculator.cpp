#include<iostream>
using namespace std;

// Switch case

int main(){
    int a,b;
    char c;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the operator: "<<endl;
    cin>>c;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    switch (c)
    {
    case '+':
        cout<<"The sum is: "<<a+b<<endl;
        break;
    case '-':
        cout<<"The subtraction is: "<<a-b<<endl;
        break;
    case '*':
        cout<<"The multiplication is: "<<a*b<<endl;
        break;
    case '/':
        cout<<"The division is: "<<a/b<<endl;
        break;
        
    
    default:
        cout<<"No such operators available: "<<endl;
        break;
    }
    return 0;
}