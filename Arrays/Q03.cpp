// Reverse an Array

// You are given an array of integers arr[]. Your task is to reverse the given array.

// Note: Modify the array in place.

// Examples:

// Input: arr = [1, 4, 3, 2, 6, 5]
// Output: [5, 6, 2, 3, 4, 1]
// Explanation: The elements of the array are 1 4 3 2 6 5. 
// After reversing the array, the first element goes to the last position, 
// the second element goes to the second last position and so on. Hence, the answer is 5 6 2 3 4 1.


class Solution {
    public:
      void reverseArray(vector<int> &arr) {
          int temp;
          int n = arr.size();
          for(int i=0; i<(n/2); i++){
              temp=arr[i];
              arr[i]=arr[n-i-1];
              arr[n-i-1]=temp;
          }
      }
  };