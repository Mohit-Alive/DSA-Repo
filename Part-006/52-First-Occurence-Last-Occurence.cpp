#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//First Occurence

int firstOcc(vector<int>v , int target){
    int s=0;
    int e=v.size()-1;
    int ans=-1;
    int mid= s+(e-s)/2;

    while(s<=e){
        if(v[mid]==target){
            //ans store
            ans=mid;
            //left search
            e=mid-1;

        }
        else if(target<v[mid]){
            //left search
            e=mid-1;
        }
        else if(target>v[mid]){
            //right search
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

//Last Occurence

int lastOcc(vector<int>arr , int target){
    int s=0;
    int e=arr.size()-1;
    int ans=-1;
    int mid= s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target){
            //ans store
            ans=mid;
            //Right search
            s=mid+1;

        }
        else if(target<arr[mid]){
            //left search
            e=mid-1;
        }
        else if(target>arr[mid]){
            //right search
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){
    cout<<endl;
    vector<int> v{1,3,3,4,4,4,4,6,7,8,};
    int target=4;
    int ans=firstOcc(v,target);
    cout<<"The answer is at the index of: "<<ans<<endl<<endl;

    int ans2=lastOcc(v,target);
    cout<<"The answer is at the index of: "<<ans2<<endl<<endl;

    //Total number of Occurence
    int total= ans2-ans+1;
    cout<<"Total Number of occurence is: "<<total<<endl;

    //Pre-Defined functions
    auto ans4= lower_bound(v.begin(),v.end(),4);
    auto ans3= upper_bound(v.begin(),v.end(),4);
    cout<<ans4-v.begin()<<endl;  //index
    cout<<ans3-v.begin()<<endl;  //index+1

    
    return 0;




}