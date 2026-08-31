/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {

public:
    ListNode* middleNode(ListNode* head) {
    ListNode*temp=head;
    int N=0;
    while(temp!=NULL){
      N++;
   temp=temp->next;
    }    
    temp=head;
    int middle=(N/2+1);
    while(temp!=NULL){
    middle--;
    if (middle==0) 
    break;
    temp=temp->next;
    }
    return temp;
    }
};