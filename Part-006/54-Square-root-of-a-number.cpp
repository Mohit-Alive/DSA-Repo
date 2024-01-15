#include<iostream>
using namespace std;

//Square root of a number 

int findSqrt(int n){
    int target= n;
    int s = 0;
    int e =n;
    int mid = s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(mid*mid==target)
        return mid;
    
        if(mid*mid>target){
            //left search
            e=mid-1;

        }
        else{
            //ans store
            ans=mid;
            //right search
            s=mid+1;
        }
    mid= s+(e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans=findSqrt(n);
    cout<<"Answer is: "<<ans<<endl; 

    int precision;
    cout<<"Enter the number of precision: ";
    cin>>precision;

    //Brute force
    double step=0.1;
    double finalAns =ans;
    for(int i=0;i<precision;i++){
        for(double j=finalAns;j*j<=n;j=j+step){
            finalAns=j;
        }
        step=step/10;
    }
    cout<<"Final Answer is: "<<finalAns<<endl;
    return 0;
}