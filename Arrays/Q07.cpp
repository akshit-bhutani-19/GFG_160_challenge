// C++ Program to find the max profit when multiple
// transactions are allowed

#include <iostream>
#include <vector>
using namespace std;

int maximumProfit(vector<int> &prices) {
    int n = prices.size();
    int stock = 0;                   //0 for not bought, 1 for bought
    int profit = 0;
    int buying_price;
    for(int i=0;i<n-1;i++){
        if((stock==0) && (prices[i]<prices[i+1])){
            stock=1;
            buying_price=prices[i];
        }
        else if((stock==1) && (prices[i]>prices[i+1])){
            stock=0;
            profit+=prices[i]-buying_price;
        }
        
    }
    if(stock==1){
        profit+=(prices[n-1]-buying_price);
    }
    return profit;
    
}

int main() {
    vector<int> prices = { 100, 180, 260, 310, 40, 535, 695 };
    cout << maximumProfit(prices) << endl;
    return 0;
}