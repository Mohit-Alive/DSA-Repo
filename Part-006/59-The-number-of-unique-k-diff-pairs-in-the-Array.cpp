#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

//The number of unique k-diff pairs in the Array

int bs(vector<int>&nums,int start,int x){
    int end=nums.size()-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(nums[mid]==x){
            return mid;
        }
        else if(x>nums[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int findPair(vector<int>& nums,int k){
    sort(nums.begin(),nums.end());
    set<pair<int,int>>ans;

    for(int i=0;i<nums.size();i++){
        if(bs(nums,i+1,nums[i]+k) != -1){
            ans.insert({nums[i],nums[i]+k});
        } 

    }
    return ans.size(); 

}

int main(){
    vector<int>arr{3,1,4,1,5,2};
    int k=2;
    auto ans= findPair(arr,k);
    cout<<"Number of Pair is: "<< ans <<endl; 


    
    return 0;
}