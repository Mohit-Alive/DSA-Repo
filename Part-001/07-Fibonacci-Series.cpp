#include<iostream>
using namespace std;

int main(){
    
    // Fibonacci Series
    int n;
    cin>>n;
    int a= 0;
    int b= 1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int next = a+b;
        cout<<next<<" ";

        a=b;
        b=next;
    }
    
    return 0;

    
    
}
   