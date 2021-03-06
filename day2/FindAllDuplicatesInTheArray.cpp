// Question Link - https://leetcode.com/problems/find-all-duplicates-in-an-array/
#include <bits/stdc++.h>
using namespace std;

// use elements of the array as indicator wether we have visited that position or not
 vector<int> findDuplicates(vector<int>& nums) {
     int n=nums.size();
     vector<int>ans;
     for (int i = 0; i < n; i++)
     {
         if(nums[abs(nums[i])-1]<0)ans.push_back(abs(nums[i]));
         else nums[abs(nums[i])-1]*=-1;
     }
     return ans;
}
