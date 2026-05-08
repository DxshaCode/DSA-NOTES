// problem:detect cycle in a linked list.
// approach:tortoise and hare algorithm
// we take two pointer slow and fast slow moves one step at a time and fast moves two steps and if they meet at a particular point that means cycle is present else not.
// time complexity:O(n)
// space complexity:O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return false;
        ListNode *slow=head;
        ListNode *fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            
            
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
};
