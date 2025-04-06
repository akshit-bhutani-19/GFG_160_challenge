// Stock Buy and Sell – Max one Transaction Allowed

// Given an array prices[] of length n, representing the prices of the stocks on different days. 
// The task is to find the maximum profit possible by buying and selling the stocks on different days 
// when at most one transaction is allowed. Here one transaction means 1 buy + 1 Sell. 
// If it is not possible to make a profit then return 0.

// Note: Stock must be bought before being sold.

// Examples:

// Input: prices[] = [7, 10, 1, 3, 6, 9, 2]
// Output: 8
// Explanation: You can buy the stock on day 2 at price = 1 and sell it on day 5 at price = 9. Hence, the profit is 8.


#include <iostream>
#include <vector>
using namespace std;

int maximumProfit(vector<int> &prices) {
    int maxProfit = 0;
    int n= prices.size();
    int max_price = prices[n-1];
    
    for(int i=n-2; i>=0; i--){
        if((max_price-prices[i])>maxProfit){
            maxProfit=max_price-prices[i];
        }
        else if(prices[i]>max_price){
            max_price=prices[i];
        }
    }
    return maxProfit;
}

int main() {
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};
    cout << maximumProfit(prices) << endl;
    return 0;
}