#include<iostream>
#include<vector>
using namespace std;

//Move all negative numbers to the left side of array
//Dutch National Flag Algorithm
//2 pointer Approach

void moveNegLeft(int*a,int n){
    int l=0,h=n-1;
    while(l<h){
        if(a[l]<0){
            l++;
        }
        else if(a[h]>0){
            h--;
        }
        else{
            swap(a[l],a[h]);
        }
    }

}


int main(){
    int a[]={1,2,3,-4,-5,-6,8,9};
    int n=sizeof(a)/sizeof(int);

    cout<<"Array to be sorted: "<<endl;
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;

    moveNegLeft(a,n);
    
    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}