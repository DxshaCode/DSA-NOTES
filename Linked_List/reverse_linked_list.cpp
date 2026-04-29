//problem:reverse the linked list
//concept:traversing and reversing the links using pointers
//approach: 1.temp will traverse
          //2.next will be at temp->next
          //3.temp->next=prev
          //4.prev=temp

//time complexity:O(n)
//space complexity:O(1)

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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while(fast!=NULL)
        {
            fast=temp->next;
            temp->next=prev;
            prev=temp;
            temp=fast;
        }
        head=prev;
        return head;
    }
};
