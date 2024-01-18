#include<iostream>
using namespace std;
void print7(int n){

    for(int i=0;i<n;i++){
        // Space
        for(int j=0;j<n-i-1;j++){

            cout<<" ";
        }
        // Star
        for(int j =0;j<2*i+1;j++){
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
        print7(n);
    
    return 0;
}