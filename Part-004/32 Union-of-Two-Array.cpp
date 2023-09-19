#include<iostream>
#include<vector>
using namespace std;

//Union of Two array

int main(){
      int arr[]={1,3,6,8,9};
      int sizea=5;
      int brr[]={2,4,5,7};
      int sizeb=4;
      vector<int> ans;

    // Push all elements of vector arr
      for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);
        }
    
    // Push all elements of vector arr
      for(int i=0;i<sizeb;i++){
        ans.push_back(brr[i]);
        }
    //Print Ans
    cout<<"Printing ans array"<<endl;
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}