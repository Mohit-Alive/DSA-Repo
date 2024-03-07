#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSub(vector<int> &nums, int start, int end){

    if(end == nums.size()) return;

    for(int i= start; i<= end; i++){
        cout<< nums[i]<<" ";
    }
    cout<<endl;

    printSub(nums, start, end + 1);
}

void printSubarray(vector<int> &nums){
    for(int start = 0; start<nums.size(); start++){
        int end = start;
        printSub(nums, start, end);
    }
}

int main(){
    
    vector<int>nums{1,2,3,4,5};
    printSubarray(nums);
    return 0;
}