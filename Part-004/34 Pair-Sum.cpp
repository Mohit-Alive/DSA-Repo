#include<iostream>
#include<vector>
using namespace std;

//Pair Sum
//Find a pair that upon addition gives value equal to sum.

int main(){
    vector<int> arr{10,20,40,60,70};
    int sum=80;


    //Print all pairs
    //Outer loop will transverse for each elements

    for(int i=0;i<arr.size();i++){
        //cout<<"We are at element "<<arr[i]<<endl;
        
        //for every element, will transverse on aage vale elements

        for(int j=i+1;j<arr.size();j++){
           // cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
           if(arr[i]+arr[j]==sum){
            cout<<"Pair Found "<<arr[i]<<","<<arr[j]<<endl;
           }
        }
    }
    
    return 0;
}