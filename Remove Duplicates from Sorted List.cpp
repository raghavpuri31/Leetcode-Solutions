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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* current=head;
        
        while(head!=NULL && head->next!=NULL)
        {
            if(head->val==head->next->val)
                head->next=head->next->next;
            else
                head=head->next;
        }
        
        return current;
    }
};
