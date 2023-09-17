#include<iostream>
using namespace std;

// Half Reverse
int main(){
    int arr[7]={10,20,30,40,50,60,70};
    int size=7;

    int start = 0;
    int end= size-1;

    while(true){
        if(start>end){
            break;
        }
        if(start==end){
            cout<<arr[start]<<" ";
            break;
        }
        else{
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        }
        start++;
        end--;

    }
    return 0;
}