#include<iostream>
#include<vector>
#include<set>

using namespace std;

//Common elements in three sorted arrays

vector<int> commonElement(int A[], int B[], int C[], int n1, int n2, int n3){
    vector<int> ans;
    set<int>st;
    int i,j,k;
    i=j=k=0;
    while(i<n1 && j<n2 && k<n3){
        if(A[i]==B[j] && B[j]==C[k]){
            //ans.push_back(A[i]);
            st.insert(A[i]);
            i++,j++,k++;
        }
        else if(A[i]<B[j]){
            i++;
        }
        else if(B[j]<C[k]){
            j++;
        }
        else{
            k++;
        }
    }

    for(auto i:st){
        ans.push_back(i);
    }

   return ans;
}

int main(){

    
    int a[]={1,2,3,4,5};
    int n1= sizeof(a)/sizeof(int);
    int b[]={2,3,4,5,6,7,8,9};
    int n2= sizeof(b)/sizeof(int);
    int c[]={2,3,4,5,6,10,11};
    int n3= sizeof(c)/sizeof(int);

    
    vector<int> ans=commonElement(a,b,c,n1,n2,n3);
    for(int x:ans){
        cout<<x<<" ";

    }
    cout<<endl;
    
   

    return 0;
}