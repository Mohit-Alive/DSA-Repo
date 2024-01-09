#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<"* ";
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }


    int a;
    cin>>a;

    int b=1;
    while(b<=a){
        int c =1;
        while(c<=a){
            cout<<b<<" ";
            c=c+1;

        }
        cout<<endl;
        b=b+1;


    }
    return 0;
}