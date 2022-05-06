// Question Link - https://leetcode.com/problems/single-element-in-a-sorted-array/
#include <bits/stdc++.h>
using namespace std;


// approach 1 - brute force with two for loops
//approach 2 - use of unorderd map
// approach 3 - use binary search , we have to find last element whose first occurenece is at even index
int singleNonDuplicate(vector<int>& nums) {
    int n=nums.size();
    int hi=n-2,lo=0;
    int ans;
    while(hi>=lo){
        int mid=hi-(hi-lo)/2;
        if(mid%2==0){
            if(nums[mid]!=nums[mid+1]){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }else{
            if(nums[mid]!=nums[mid+1]){
                lo=mid+1;
            }else hi=mid-1;
        }
    }
    return nums[lo];
}