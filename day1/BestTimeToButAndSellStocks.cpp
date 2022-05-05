// Question Link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include <bits/stdc++.h>
using namespace std;

// approack maintain two profits variables
 int maxProfit(vector<int>& prices) {
     int cur_low=INT_MAX;
     int cur_profit=0;
     int max_profit=0;
     int n=prices.size();
     for(int i=0;i<n;i++){
        cur_low=min(cur_low,prices[i]);
        cur_profit=prices[i]-cur_low;
        max_profit=max(cur_profit,max_profit);
     }
     return max_profit;
 }
