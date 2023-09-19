#include<iostream>
#include<vector>
using namespace std;

// Intersection of Two Array

int main(){
    vector<int> arr{1,2,3,3,4,6,8};
    vector<int> brr{1,3,3,4,9,10};
    vector<int> ans;

    //Outer loop on arr vector
    for(int i=0; i<arr.size(); i++){
        int element=arr[i];
        // For every element ,run loop on brr
        for(int j=0;j<brr.size();j++){
            if(element==brr[j]){
                //Mark
                brr[j]=-1;
                ans.push_back(element);
            }
        }
    }
    //Print ans
    for(auto value: ans){
        cout<<value<<" ";
    }
    
    return 0;
}