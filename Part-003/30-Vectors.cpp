#include<iostream>
#include<vector>
using namespace std;

// Vector

int main(){
    vector<int> arr;

    cout<< arr.size()<<endl; 
    cout<< arr.capacity()<<endl;

    //insert
    arr.push_back(5);
    arr.push_back(7);

    //print
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

//Remove
    arr.pop_back();
     for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

    int n;

    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    vector<int> brr(n,-100);

    cout<<"Size of brr: "<<brr.size()<<endl;
    cout<<"Capacity of brr: "<<brr.capacity()<<endl;


     for(int i=0; i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl<<endl;

    vector<int> crr{0,1,2,3,4,5};
     for(int i=0; i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl<<endl;

    vector<int> drr;

    cout<<"Vector crr is empty or not: "<<crr.empty()<<endl;
    cout<<"Vector drr is empty or not: "<<drr.empty()<<endl;


    
    return 0;
}