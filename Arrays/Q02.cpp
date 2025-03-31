// Move All Zeroes to End

// You are given an array arr[] of non-negative integers. Your task is to move all the
// zeros in the array to the right end while maintaining the relative order of the non-zero
// elements. The operation must be performed in place, meaning you should not use
// extra space for another array.
// Example
// Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
// Output: [1, 2, 4, 3, 5, 0, 0, 0]
// Explanation: There are three 0s that are moved to the end.

class Solution {
    public:
      void pushZerosToEnd(vector<int>& arr) {
          int numZero = 0;
          for(int i=0; i<arr.size(); i++){
              if(arr[i]==0){
                  numZero++;
                  continue;
              }
              arr[i-numZero]=arr[i];
              if (numZero!=0){
                  arr[i]=0;
              }
          }
          return;
      }
  };