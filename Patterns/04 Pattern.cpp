#include<iostream>
using namespace std;

void print4(int n){ 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";

        }
        cout<<endl;
    }

}
int main(){
      int n;
        cin>>n;
        print4(n);
    return 0;
}