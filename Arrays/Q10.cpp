// C++ Program for Maximum Subarray Sum using Kadane's Algorithm

#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum subarray sum
int maxSubarraySum(vector<int> &arr) {
    int res = arr[0];
    int max_ending = arr[0];
    int n = arr.size();
    
    for(int i=1; i<n ; i++){
        max_ending=max(max_ending+arr[i],arr[i]);
        res=max(max_ending,res);
    }
    return res;
}

int main() {
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubarraySum(arr);
    return 0;
}