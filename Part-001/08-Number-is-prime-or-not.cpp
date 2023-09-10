#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isprime = 1;

    for(int i=2;i<n;i++){
        if(n%i==0){
           // cout<<"Not prime"<<endl;
           isprime=0;
            break;
        }
   
    }
    if(isprime == 0){
        cout<<"Not Prime"<<endl;

    }
    else{
        cout<<"Is Prime"<<endl;
    }
    return 0;
}