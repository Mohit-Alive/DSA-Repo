#include<iostream>
#include<math.h>
using namespace std;
//Reverse Integer

int main(){
    int x;
    cin>>x;
    int digit;
    int ans=0;
    while(x!=0){
        int digit=x%10;
        if((ans>INT32_MAX/10)||(ans<INT32_MIN/10)){
           cout<<0<<endl;
        }
        
        ans = (ans*10)+digit;
        x=x/10;
    }  
        cout<<ans;
   
}