#include<iostream>
#include<vector>
using namespace std;

//Triplet

int main(){
    vector<int> arr{10,20,30,40}; 
    int sum=70; 

    for(int i=0; i<arr.size();i++){

        for(int j=i+1;j<arr.size();j++){

            for(int k=j+1;k<arr.size();k++){
                
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<"Pair Found: "<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;

                }
            }
        }
    }
    
    return 0;
}