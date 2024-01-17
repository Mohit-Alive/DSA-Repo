#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// Minimum Time difference

int findMinDiff(vector<string>& timepoints){
    //hour to minute in int value
    vector<int> minutes;
    for(int i=0; i<timepoints.size();i++){
        string curr =timepoints[i];

        int hours = stoi(curr.substr(0,2));
        int min = stoi(curr.substr(3,2));
        int totalMin=hours*60+min;
        minutes.push_back(totalMin);
    } 
    //sort
    sort(minutes.begin(),minutes.end());

    //diff and calc min diff
    int mini = INT_MAX;
    int n = minutes.size();

    for(int i=0; i<n-1;i++){
        int diff= minutes[i+1]-minutes[i];
        mini= min(mini,diff);

    }

    int lastDiff1= (minutes[0]+1440)-minutes[n-1];
    int lastDiff2= minutes[n-1]-minutes[0];
    int lastDiff=  min(lastDiff1,lastDiff2);
    mini = min(mini,lastDiff);

    return mini;

}

int main(){
    vector<string> timePoints{"23:59","00:00"};
    vector<string> timePoint{"00:00","23:59","00:00"};
    auto a= findMinDiff(timePoints);
    auto b= findMinDiff(timePoint);
    cout<<a<<endl;
    cout<<b<<endl;
    
    return 0;
}