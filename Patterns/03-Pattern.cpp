#include<iostream>
using namespace std;

void print3(int n){
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<< j <<" ";

    }
    cout<<endl;
    }

}
int main(){
      int n;
        cin>>n;
        print3(n);
    return 0;
}