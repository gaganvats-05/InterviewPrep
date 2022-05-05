// Question Link - https://leetcode.com/problems/move-zeroes/
#include <bits/stdc++.h>
using namespace std;

// approach-- two pointer
void moveZeroes(vector<int>& nums) {
    int n=nums.size();
    int ptr1=0,ptr2=0;
    while(ptr1<n&&ptr2<n){
        if(nums[ptr1]==0){
            while(ptr2<n&&nums[ptr2]==0)ptr2++;
            if(ptr2<n)swap(nums[ptr1],nums[ptr2]);
        }
        ptr1++,ptr2++;
    }
}
