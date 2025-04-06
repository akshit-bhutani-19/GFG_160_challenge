// Minimize the Heights II

// Given an array arr[] denoting heights of N towers and a positive integer K.

// For each tower, you must perform exactly one of the following operations exactly once.

// Increase the height of the tower by K
// Decrease the height of the tower by K
// Find out the minimum possible difference between the height of the shortest and tallest towers 
// after you have modified each tower.

// Note: It is compulsory to increase or decrease the height by K for each tower. 
// After the operation, the resultant array should not contain any negative integers.

// Examples :

// Input: k = 2, arr[] = {1, 5, 8, 10}
// Output: 5
// Explanation: The array can be modified as {1+k, 5-k, 8-k, 10-k} = {3, 3, 6, 8}.
// The difference between the largest and the smallest is 8-3 = 5.



#include <bits/stdc++.h>
using namespace std;

// Function to minimize the maximum difference
int getMinDiff(vector<int> &arr, int k) {
    int n = arr.size();
    sort(arr.begin(),arr.end());
    
    int res = arr[n-1]-arr[0];
    
    for(int i=1; i<n; i++){
        if(arr[i]-k<0){
            continue;
        }
        int minHeight = min(arr[0]+k,arr[i]-k);
        int maxHeight = max(arr[i-1]+k,arr[n-1]-k);
        
        res=min(res,maxHeight-minHeight);
    }
    return res;
}

int main() {

    int k = 6;
    vector<int> arr = {12, 6, 4, 15, 17, 10};

    int ans = getMinDiff(arr, k);
    cout << ans;

    return 0;