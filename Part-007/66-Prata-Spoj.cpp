#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// PRATA SPOJ

bool ispossiSol(vector<int>cooksRanks,int np,int mid){
    int currP=0; //initial coooked parta count
    for(int i=0;i<cooksRanks.size();i++){
        int r=cooksRanks[i],j=1;
        int timeTaken=0;

        while(true){
            if(timeTaken+j*r<=mid){
                ++currP;
                timeTaken+=j*r;
                ++j;
            }
            else{
                break;
            }
        }
        if(currP>=np){
            return true;
        }
    }
    return false;
}
int minTimeToComOrder(vector<int>cooksRanks,int np){
    int start=0;
    int highestRank= *max_element(cooksRanks.begin(),cooksRanks.end());
    int end= highestRank*(np*(np+1)/2);
    int ans=-1;

    while(start<=end){
        int mid= (start+end)/2;
        if(ispossiSol(cooksRanks,np,mid)){
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
    int t; cin>>t;
    while(t--){
        int np,nc;
        cin>>np>>nc;
        vector<int>cooksRanks;
        while(nc--){
            int r; cin>>r;
            cooksRanks.push_back(r);

        }
        cout<<minTimeToComOrder(cooksRanks,np)<<endl;
    }
    
    return 0;
}
//3
//10
//4 1 2 3 4
