#include<iostream>
using namespace std;
int main(){

    //****************Sum of all numbers*******************
    int n;
    cin>>n;

    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"value of sum is: "<<sum<<endl;

    //************To find if number is prime or not*********
    int m;
    cin>>m;

    int o = 2;
    while(o<m){
        if(m%o==0){
            cout<<"Not Prime for "<<o<<endl;
        }
        else{
            cout<<"Prime for "<<o<<endl;
        }
        o=o+1;
    }



}