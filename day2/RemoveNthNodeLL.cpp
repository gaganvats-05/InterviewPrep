// Question Link - hhttps://leetcode.com/problems/diameter-of-binary-tree/
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

int Length(ListNode* head){
    if(head->next==NULL)return 1;
    return 1+Length(head->next);
}
ListNode* removeNthFromEnd(ListNode* head, int n) {
    int len=Length(head);
    int toremove=len-n-1;
    ListNode *prev=head,*curr,*next;
    for(int i=0;i<toremove;i++)prev=prev->next;
    curr=prev->next;
    if(len==n){
        head=head->next;
        return head;
    }
    prev->next=curr->next;
    return head;
}