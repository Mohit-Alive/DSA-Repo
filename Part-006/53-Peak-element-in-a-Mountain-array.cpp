#include<iostream>
#include<vector>
using namespace std;

//Peak element in a Mountain array

int findPeakIndex(vector<int> arr){
    int s=0;
    int e= arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]< arr[mid+1]){
            //right search
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}


int main(){
    cout<<endl;
    vector<int> arr{1,2,7,10,6,5,2};
    int ans= findPeakIndex(arr);

    cout<<ans<<endl;

    return 0;
}