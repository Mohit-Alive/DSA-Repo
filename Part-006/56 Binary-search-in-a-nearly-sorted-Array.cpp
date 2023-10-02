#include<iostream>
#include<vector>
using namespace std;

//Binary search in a nearly sorted Array
//nearly = element can be found at i-1,i,i+1 index

int binarysearch(vector<int> arr, int target){
    int s=0;
    int e=arr.size()-1;

    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target)
        return mid;
        if(mid-1>=0 && arr[mid-1]==target)
        return mid-1;
        if(mid+1<arr.size() && arr[mid+1]==target)
        return mid+1;

        if(target>arr[mid]){
            //right search
            s=mid+2;
        }
        else{
            //left search
            e=mid-2;
        }
        mid=s=(e-s)/2;
    }
    return -1;
}
 
int main(){
    cout<<endl;
    vector<int> arr{10,3,40,20,50,80,70};
    int target =40;

    int ans= binarysearch(arr,target);
    cout<<"Index of "<<target<<" is "<<ans<<endl<<endl;
    
    return 0;
}