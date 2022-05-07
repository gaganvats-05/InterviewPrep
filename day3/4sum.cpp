// Question Link - https://leetcode.com/problems/4sum/
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
     sort(nums.begin(),nums.end());
     vector<vector<int>>ans;
     set<vector<int>>checkDuplicates;
     int n=nums.size();
     for (int i = 0; i < n; i++)
     {
         int target1=target-nums[i];
        for (int j = i+1; j < n; j++)
        {
            int target2=target1-nums[j];
            int lo=j+1,hi=n-1;
            while(lo<hi){
                int sum=nums[hi]+nums[lo];
                if(sum==target2){
                    vector<int>temp={nums[i],nums[j],nums[hi],nums[lo]};
                    if(!checkDuplicates.count(temp)){
                        ans.push_back(temp);
                        checkDuplicates.insert(temp);
                    }
                }
                sum>target2?hi--:lo++;
            }
        } 
     }
     return ans;
}