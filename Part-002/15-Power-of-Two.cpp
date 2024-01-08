#include<iostream>
#include<math.h>
using namespace std;
//Power of two
int main(){
    int n;
    cin>>n;
    /*
    for(int i = 0; i<=30;i++){
        int ans=pow(2,i);
        if(ans==n){
           
            cout<<"True"<<endl;
            break;
        }
        else{
        
            cout<<"False"<<endl;
        }
    }
        */ 

    int ans =1;
    for(int i=1;i<+30;i++){
        if(ans==n){
            cout<<"True"<<endl;
            break;
        }
        if(ans<INT32_MAX/2)
        ans=ans*2;
        
        }
        cout<<"False"<<endl;
    
    
    return 0;
}