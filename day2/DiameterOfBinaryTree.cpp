// Question Link - hhttps://leetcode.com/problems/diameter-of-binary-tree/
#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
      int val;
     TreeNode *left;
     TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     };
 
int utilDiameterOfBinaryTree(TreeNode* root,int &ans){
        if(root==NULL)return 0;
        int left_height=utilDiameterOfBinaryTree(root->left,ans);
        int right_height = utilDiameterOfBinaryTree(root->right,ans);
        ans=max(left_height+right_height,ans);
        return max(left_height,right_height)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        utilDiameterOfBinaryTree(root,ans);
        return ans;
    }