// Rotate Array

// Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. 
// Do the mentioned change in the array in place.

// Note: Consider the array as circular.

// Examples :

// Input: arr[] = [1, 2, 3, 4, 5], d = 2
// Output: [3, 4, 5, 1, 2]
// Explanation: when rotated by 2 elements, it becomes 3 4 5 1 2.
// Input: arr[] = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20], d = 3
// Output: [8, 10, 12, 14, 16, 18, 20, 2, 4, 6]
// Explanation: when rotated by 3 elements, it becomes 8 10 12 14 16 18 20 2 4 6.



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n=arr.size();
        d=d%n;
        vector<int> arr2 = arr;
        for(int i=0; i<n ;i++){
            if(i+d<n){
                arr[i]=arr2[i+d];
            }
            else{
                arr[i]=arr2[i+d-n];
            }
        }
    }
};