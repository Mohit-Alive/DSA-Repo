#include<iostream>
using namespace std;

int main(){
    //Bit Wise Operators
    int a = 4;
    int b = 6;

    cout<<"a&b= "<< (a&b)<<endl;  //And
    cout<<"a|b= "<< (a|b)<<endl;  //Or
    cout<<"~a= "<< (~a)<<endl;    //Not
    cout<<"a^b= "<< (a^b)<<endl;  //Xor

    //Left and Right shift
    cout<<(17>>1)<<endl;  //Right Shift //generally 2 divide 
    cout<<(17>>2)<<endl;  //  /2*2
    cout<<(19<<1)<<endl;  // Left Shift //generally 2 multipy
    cout<<(19<<2)<<endl;  //  2*2

    int n;
    cin>>n;
    int sum=0;
    
    // For Loop
    // for(initialization; condition; updation)
    for(int i =1;i<=n;i++){
        //sum=sum+i
        sum+=i;

    }
    cout<<sum<<endl;
    
    return 0;


} 