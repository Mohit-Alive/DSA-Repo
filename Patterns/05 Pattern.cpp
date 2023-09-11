#include<iostream>
using namespace std;
void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}
int main(){
      int n;
        cin>>n;
        print5(n);
    
    return 0;
}