#include<iostream>
using namespace std;
void print8(int n){

    for(int i=0;i<n;i++){
        // Space
        for(int j=0;j<i;j++){

            cout<<" ";
        }
        // Star
        for(int j =0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        // space
        for(int j= 0;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;
    }

}
int main(){
      int n;
        cin>>n;
        print8(n);
    
    return 0;
}