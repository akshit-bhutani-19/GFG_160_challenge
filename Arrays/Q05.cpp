// Next Permutation

// Given an array of integers arr[] representing a permutation, 
// implement the next permutation that rearranges the numbers into the lexicographically next greater permutation. 
// If no such permutation exists, rearrange the numbers into the lowest possible order (i.e., sorted in ascending order). 

// Note - A permutation of an array of integers refers to a specific arrangement of its elements in a sequence or linear order.

// Examples:

// Input: arr = [2, 4, 1, 7, 5, 0]
// Output: [2, 4, 5, 0, 1, 7]
// Explanation: The next permutation of the given array is {2, 4, 5, 0, 1, 7}.

// Input: arr = [3, 2, 1]
// Output: [1, 2, 3]
// Explanation: As arr[] is the last permutation, the next permutation is the lowest one.



#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr) {
  
    int n = arr.size(); 

     // Find the pivot index
    int pivot = -1; 
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            pivot = i;
            break;
        }
    }

    // If pivot point does not exist, reverse the
    // whole array
    if (pivot == -1) {
        reverse(arr.begin(), arr.end());
        return;
    }

    // find the element from the right that
    // is greater than pivot
    for (int i = n - 1; i > pivot; i--) {
        if (arr[i] > arr[pivot]) {
            swap(arr[i], arr[pivot]);
            break;
        }
    }

    // Reverse the elements from pivot + 1 to the 
    // end to get the next permutation
    reverse(arr.begin() + pivot + 1, arr.end());
}

int main()
{
    vector<int> arr = { 2, 4, 1, 7, 5, 0 };
    nextPermutation(arr);    
    for (int x : arr) 
        cout << x << " ";    
    return 0;
}