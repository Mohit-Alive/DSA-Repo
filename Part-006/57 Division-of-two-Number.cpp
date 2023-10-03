#include<iostream>
using namespace std;

int solve(int dividend, int divisor){
    int s=0;
    int e=abs(dividend);
    int ans =-1;

    int mid=s+(e-s)/2;
    while(s<=e){
        //Perfect solution
        if(abs(mid*divisor)==abs(dividend)){
            ans=mid;
            break;
        }
        //Not perfect solution
        if(abs(mid*divisor)>abs(dividend)){
            //left search
            e=mid-1;
        }
        else{
            //Ans atore
            ans=mid;
            //Right search
            s=mid+1;

        }
        mid=s+(e-s)/2;
    }
    if((divisor<0 && dividend<0)||(divisor>0 && dividend>0))
        return ans;
    else{
        return -ans;
    }
}

int main(){
    int dividend= -21;
    int divisor=7;

    int ans= solve(dividend,divisor);
    cout<<"Ans is "<<ans<<endl;


    
    return 0;
}