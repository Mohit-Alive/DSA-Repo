#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

//Find duplicate number
//Positioning method


int findDuplicate(vector<int>& nums){
    while(nums[0]!=nums[nums[0]]){
        swap(nums[0], nums[nums[0]]);
    }
    return nums[0];
}
//Missing elements from an array

void findMissing(int*a,int n){
    //visiting method
    for(int i=0;i<n;i++){
        int index =abs(a[i]);
        if(a[index-1]>0){
            a[index-1]*=-1;
        }
    }
    //If you want to see hoe it works
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }

    //all positive indexes are missing
    for(int i=0;i<n;i++){
        if(a[i]>0)
        cout<<i+1<<" ";
    }

}
//Sorting + Swaping method
void missingBySort(int*a,int n){

    int i=0;
    while(i<n){
        int index = a[i]-1;
        if(a[i]!=a[index]){
            swap(a[i],a[index]);

        }
        else{
            ++i;
        }
    }
    //To check how it works

    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

    for( int i=0;i<n;i++){
        if(a[i]!=i+1){
          cout<<i+1<<" ";  
        }
    }
    cout<<endl;
}

//Find First Repeating Element
int firstRepeat(int*a,int n){ 
    for(int i=0;i<n;i++){
        bool isRepeated = false;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                isRepeated=true;
                return i+1;
            }
        }
    }
    return -1;

}
//Hashing
int firstRepeat2(int*a,int n){
    unordered_map<int, int>hash;
    for(int i=0;i<n;i++){
        hash[a[i]]++;

    }
    for(int i=0;i<n;i++){
        if(hash[a[i]]>1){
            return i+1;
        }
    }
    return -1;


}
 


int main(){
    vector<int> a{1,2,3,4,4};
    vector<int> b{1,2,2,3,4};
 
     
     cout<<findDuplicate(a)<<endl;
     cout<<findDuplicate(b)<<endl;

     int n;
     int c[]={5,3,5,3,3};
     n= sizeof(c)/sizeof(int);

    //findMissing(c,n);
    missingBySort(c,n);

    int m;
    int d[]={1,2,3,4,3};
    m= sizeof(d)/sizeof(int);

    cout<<firstRepeat(d,n)<<endl;

    int p;
    int e[]={1,2,3,4,5,6,5};
    p= sizeof(e)/sizeof(int);
    
    cout<<firstRepeat2(e,p);
    
    return 0;
}