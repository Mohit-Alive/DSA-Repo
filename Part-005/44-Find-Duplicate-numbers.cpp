#include<iostream>
#include<vector>
using namespace std;

//Find Duplicate numbers
//Negative Marking Method

int findDuplicate(vector<int>& nums){
    int ans = -1;
    for(int i=0;i<nums.size();i++){
        int index = abs(nums[i]);

        // is already visited
        if(nums[index]<0){
            ans = index;
            break;
        }
        // Visited mark
        nums[index] *= -1;

    }
    return ans;

}


int main(){
    vector<int> a{1,2,3,4,4,};
    vector<int> b{0,1,2,3,3,3,4,}; 
   
       
    cout<<findDuplicate(a)<<endl;
    cout<<findDuplicate(b);

    
    return 0;
}