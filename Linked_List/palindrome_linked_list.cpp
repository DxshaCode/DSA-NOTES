//problem: check if a linked list is palindrome or not
//concept: we have to check is linked list data are same in forward and backward direction
//approach: we have used a vector to store our ll.and then as we check in arrays whether they are palindrome or not same logic is applied here.
//time complexity:O(n)
//space complexity:O(n)



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
    bool isPalindrome(ListNode* head) {
        vector <int> v;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            v.push_back( temp->val );
            temp=temp->next;
        }

        for(int i=0,j=v.size()-1;i<j;i++,j--) //two pointer approach one moves to the right and one moves to left until they met.
        {
            if(v[i]!=v[j])
            return false;
        }
        return true;
    }
};
