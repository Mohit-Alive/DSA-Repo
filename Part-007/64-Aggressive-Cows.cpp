#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

//Aggressive Cows

bool isPossiSol(vector<int>&stalls,int k,int mid){
    //can we place k cows, with at least mid distance btw cows.

    int c=1;
    int pos=stalls[0];
    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-pos>=mid){
            c++;
            pos=stalls[i]; //one more cow has been placed

        }
        if(c==k) return true;
    }
    return false;
}

int solve(int n, int k, vector<int>&stalls){
    sort(stalls.begin(),stalls.end());
    int start=0;
    int end=stalls[stalls.size()-1]-stalls[0];

    int ans=-1;

    while(start<=end){
        int mid =(start+end)/2;
        if(isPossiSol(stalls,k,mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int>stalls{1,2,4,8,9};
    int n=5;
    int k=3;
    cout<<endl;
    auto ans=solve(n,k,stalls);
    cout<<"The min distance between the cows is: "<<ans<<". Which is also the largest among all possible ways."<<endl<<endl;
    
    return 0;
}



