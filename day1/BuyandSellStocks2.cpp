// Question Link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
#include <bits/stdc++.h>
using namespace std;

//buy at every low and sell at every high
 int maxProfit(vector<int>& prices) {
     int Profit=0;
     int cur_profit;
     int buy=INT_MAX;
     int n=prices.size();
     for (int i = 0; i < n; i++)
     {
        buy=min(buy,prices[i]);
       cur_profit=prices[i]-buy; 
       if (cur_profit>0)
       {
           Profit+=cur_profit;
           buy=prices[i];
       }
     }
     return Profit;   
 }
