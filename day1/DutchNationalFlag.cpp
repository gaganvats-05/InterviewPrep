// Question Link - https://leetcode.com/problems/sort-colors/
#include <bits/stdc++.h>
using namespace std;

// DUTCH NATIONAL FLAG ALGORITHM - sort the arrays consisting of 0,1,2;
// approach-- use three pointers dividing array into three regions -0s,1s,2s;

void sortColors(vector<int>& nums) {
    int n=nums.size();
    int lo=0,mid=0,hi=n-1;
    while(mid<=hi){
        //case1
        if(nums[mid]==0){
            swap(nums[mid],nums[lo]);
            mid++,lo++;
        }
        //case2
        else if(nums[mid]==1)mid++;
        //case3
        else if(nums[mid]==2){
            swap(nums[mid],nums[hi]);
            hi--;
        }
    }
}