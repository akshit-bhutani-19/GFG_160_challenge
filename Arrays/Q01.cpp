// Second Largest

// Given an array of positive integers arr[], return the second largest element from
// the array. If the second largest element doesn't exist then return -1.
// Note: The second largest element should not be equal to the largest element.
// Examples:
// Input: arro = [12, 35, 1, 10, 34, 1]
// Output: 34
// Explanation: The largest element of the array is 35 and the second
// largest element is 34.

class Solution {
    public:
      // Function returns the second
      // largest elements
      int getSecondLargest(vector<int> &arr) {
          int largest = arr[0];
          int second = -1;
          for(int i=1;i<arr.size();i++){
              if(arr[i]>largest){
                  second = largest;
                  largest = arr[i];
              }
              else if(arr[i]==largest){
                  continue;
              }
              else if((arr[i]<largest) && (arr[i]>second)){
                  second = arr[i];
              }
          }
          return second;
      }
  };