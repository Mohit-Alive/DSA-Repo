#include<iostream>
#include<vector>
using namespace std;

//Wave print Matrix
//i   0 1  2  3
//0   1 2  3  4
//1   5 6  7  8
//2   9 10 11 12
// Output 1 5 9 10 6 2 3 7 11 12 8 4

void wavePrint(vector<vector<int>>v){
    int r=v.size();
    int c=v[0].size();
    for(int startCol=0;startCol<c;startCol++){
        //even no. of col--> Top to bottom
        if((startCol&1)==0){
            for(int i=0;i<r;i++){
                cout<<v[i][startCol]<<" ";
            }
        }
        else{
            //odd no. of cols--> bottom to top
            for(int i=r-1;i>=0;i--){
                cout<<v[i][startCol]<<" ";
            }
        }
    }
}

int main(){
    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8},
        {9, 10, 11, 12 }
    
    };
    wavePrint(v);
    
    return 0;
}