// Question Link - "https://leetcode.com/problems/find-the-duplicate-number/"

#include <bits/stdc++.h>
using namespace std;

// FLOYD WARSHALL ALGORITHM - slow and fast pointer method

int findDuplicate(vector<int>& nums) {
    int fast=nums[0],slow=nums[0];
    do{
        slow=nums[slow];
         fast=nums[nums[fast]];
    }while(slow!=fast);
    slow=nums[0];
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow;
}

// Similar problem of floyd warshall --  https://leetcode.com/problems/linked-list-cycle-ii/
 struct ListNode {
     int val;
     ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *detectCycle(ListNode *head) {
   ListNode *slow,*fast;
   if(head==NULL||head->next==NULL||head->next->next==NULL)return NULL;
   slow=head->next;
   fast=head->next->next;
   while(slow!=fast){
       if(fast==NULL||(fast->next==NULL))return NULL;
       slow=slow->next;
       fast=fast->next->next;
   }
   slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;    
}