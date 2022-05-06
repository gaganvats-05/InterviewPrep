// Question Link - https://leetcode.com/problems/container-with-most-water/
#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int n=height.size();
    int left=0,right=n-1;
    int Area=0;
    while(left<right){
        Area=max(Area,(right-left)*(min(height[left],height[right])));
        height[left]>height[right]?right--:left++;
    }
    return Area; 
}
