// Question Link - https://leetcode.com/problems/subarray-sums-divisible-by-k/
#include <bits/stdc++.h>
using namespace std;

// use hash map and prefix sum with mod
int subarraysDivByK(vector<int>& nums, int k) {
    int n=nums.size();
    int cur_sum=0;
    int ans=0;
    unordered_map<int,int>umap;
    for (int i = 0; i < n; i++)
    {
        cur_sum=((cur_sum+nums[i])%k+k)%k;
        if(cur_sum==0)ans++;
        ans+=umap[cur_sum];
        umap[cur_sum]++;
    }
    return ans;
}
