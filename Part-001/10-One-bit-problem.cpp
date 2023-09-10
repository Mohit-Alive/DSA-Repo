#include<iostream>
using namespace std;
//Number of 1 bit

int n = 00000000000000000000000000001011;
int main(){
    
    int count = 0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;

    
    }
    cout<<n<<endl;
    
    
     return 0;
} 