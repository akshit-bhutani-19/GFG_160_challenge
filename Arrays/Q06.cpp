// C++ program for finding the majority element in an array
// using Moore’s Voting algorithm

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

// Function to find Majority element in an array
vector<int> findMajority(vector<int>& arr) {
    int n= arr.size();
    int e1 = -1;
    int e2 = -1;
    int count1 = 0;
    int count2 = 0;
    
    for(int i=0; i<n ; i++){
        if(arr[i]==e1){
            count1++;
        }
        else if(arr[i]==e2){
            count2++;
        }
        else if(count1 == 0){
            e1 = arr[i];
            count1++;
        }
        else if(count2 == 0){
            e2 = arr[i];
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    
    vector<int> res;
    count1 = 0;
    count2 = 0;
    
    for(int ele : arr){
        if(e1==ele) count1++;
        if(e2==ele) count2++;
    }
    
    if(count1 > n/3) res.push_back(e1);
    if(count2 > n/3 && e1!=e2) res.push_back(e2);
    
    if(res.size()==2 && res[0]>res[1]){
        swap(res[0],res[1]);
    }
    
    return res;
}

int main() {
  
    vector<int> arr = {2, 2, 3, 1, 3, 2, 1, 1};
    vector<int> res = findMajority(arr);
    for (int ele : res) {
        cout << ele << " ";
    }
    return 0;
}