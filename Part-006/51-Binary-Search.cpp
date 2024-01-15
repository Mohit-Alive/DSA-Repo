#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Binary Search 

int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
   

    int mid=start+(end-start)/2;

    while(start<=end){
        int element = arr[mid];

        if(element == target){
            return mid;
        }
        else if(target < element){
            //search in left
            end = mid-1;
        }
        else{
            //Search in right
            start = mid+1;
        }
        mid=start+(end-start)/2;
        
    }
    //element not found
    return -1;
}
        
        
int main(){
    int arr[]={2,4,5,6,8,9,10,56,78};
    int size= 9;
    int target=10;
    cout<<endl;

    int indexoftarget = binarySearch(arr,size,target);

    if(indexoftarget == -1){
        cout<<"Target not Found"<< endl;

    }
    else{
        cout<<"Target found at "<<indexoftarget<<" index"<<endl;
    }
    cout<<endl;

    //Pre-defined Function
    vector<int> v{5,6,7,8,9,10};
    int brr[]={5,6,7,10,20,30};
    int size2=6;

    //Search in vector
    if(binary_search(v.begin(),v.end(),9)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    //Search in array
    if(binary_search(brr,brr+size2,20)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    
    return 0;
}