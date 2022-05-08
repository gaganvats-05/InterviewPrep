// Question Link - https://leetcode.com/problems/partition-equal-subset-sum/
#include <bits/stdc++.h>
using namespace std;
int ispossible(int i,vector<int>&nums,int target,vector<vector<int>>&dp){
    if(i==nums.size())return false;
    if(dp[i][target]!=-1)return dp[i][target];
    if(target==0)return true;
    if(target>=nums[i])
        return dp[i][target]=ispossible(i+1,nums,target,dp)||ispossible(i+1,nums,target-nums[i],dp);
    else return dp[i][target]=ispossible(i+1,nums,target,dp);
}
bool canPartition(vector<int>& nums) {
    int sum=0,n=nums.size();
    for (int i = 0; i < n; i++)sum+=nums[i];    
    if(sum%2)return false;
    int target=sum/2;  
    vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
    int ans=ispossible(0,nums,target,dp);
    return ans;
}


