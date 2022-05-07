// Question Link - https://leetcode.com/problems/3sum/
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
     // sort the given array.
     sort(nums.begin(),nums.end());
     //initailize an unordered map
     unordered_map<int,int>umap;
     // store the size of the given array 
     int n=nums.size();
     //creating a set for answers to avoid duplicates
     set<vector<int>>stans;
     //initializing returning answer
     vector<vector<int>>ans;
     for(int i=0;i<n;i++){
         int hi=n-1,lo=i+1;
         while(hi>lo){
            int cur_sum=nums[i]+nums[hi]+nums[lo];
            if(cur_sum==0){
                vector<int>temp={nums[i],nums[lo],nums[hi]};
                 if(!stans.count(temp)){
                     ans.push_back(temp);
                     stans.insert(temp);
                 }
            }
            cur_sum>0?hi--:lo++;
         }
     }
     return ans;
}