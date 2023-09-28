#include<iostream>
#include<vector>
using namespace std;

//Spiral Print a Matrix

//i   0 1 2

//0   1 2 3
//1   4 5 6
//2   7 8 9

//Output---> 1 2 3 6 9 8 7 4 5

vector<int> spiralPrint(vector<vector<int>>& matrix){
    vector<int> ans;
    int m=matrix.size();
    int n=matrix[0].size();
    int total_elements=m*n;

    int startingRow=0;
    int endingCol=n-1;
    int endingRow=m-1;
    int startingCol=0;
    int count =0;

    while(count<total_elements){
        //print starting row
        for(int i=startingCol; i<=endingCol && count<total_elements; i++){
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        //print Ending col
        for(int i=startingRow; i<=endingRow && count<total_elements; i++){
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        //Print Ending Row
        for(int i=endingCol; i>=startingCol && count<total_elements; i--){
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        //Print Starting Col
        for(int i=endingRow; i>=startingRow && count<total_elements; i--){
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;

    }
    return ans;

}

int main(){
    
    vector<vector<int>> Matrix{
        {1,2,3},
        {4,5,6},
        {7,8,9}

    };

    vector<int> ans = spiralPrint(Matrix);

    for(int x : ans){
        cout << x << " ";
    }
    
    
    return 0;
}