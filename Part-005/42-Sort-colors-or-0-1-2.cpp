#include<iostream>
#include<vector>
using namespace std;

//Sort colors or 0,1,2
//Three pointer approach
    void sortColors(vector<int>& nums) {
       int l=0,m=0,h=nums.size()-1;
       while(m<=h){
           if(nums[m]==0){
               swap(nums[l],nums[m]);
               l++,m++;

           }
           else if(nums[m]==1){
               m++;
           }
           else{
               swap(nums[m],nums[h]);
               h--;
           }
        }
    }

int main(){

    vector<int> a{1,2,0,1,2,0,1,2,0};
    vector<int> b{1,2,0,1,1,0,1,1,0};
 
    sortColors(a);
    sortColors(b);

    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}