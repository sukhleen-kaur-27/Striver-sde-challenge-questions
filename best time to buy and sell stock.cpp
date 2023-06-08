// no main function created

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int min_val = prices[0]; 
    int n = prices.size();
    int max_profit = 0;
    for (int i = 1; i<n; i++){
        int cost = prices[i]-min_val;
        max_profit = max(max_profit, cost);
        min_val = min(min_val, prices[i]);
    }
    return max_profit;
}
