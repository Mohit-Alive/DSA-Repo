#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Book allocation problem

bool iPossiSol(int A[],int N,int M,int sol){
    int pageSum=0;
    int c=1;
    for(int i=0;i<N;i++){
        if(A[i]>sol){
            return false;
        }
        if(pageSum+A[i]>sol){
            c++;
            pageSum=A[i];
            if(c>M){
                return false;
            }
        }
        else{
            pageSum+=A[i];
        }
    }
    return true;
}
int findPages(int A[],int N,int M){
    if(M>N) return -1;

    int start=0;
    int end= accumulate(A,A+N,0);
    int ans= -1;

    while(start<=end){
        int mid=(start+end)/2;
        if(iPossiSol(A,N,M,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){

    int A[]={12,34,67,90};
    int N=4;
    int M=2;
    cout<<endl;
    cout<<"Minimum of maximum pages is: "<<findPages(A,N,M)<<endl<<endl;
    
    return 0;
}