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
    void reorderList(ListNode* head) {
        
      while(head && head->next){
        ListNode* ahead = head->next, *behind = head;
        while(ahead->next){
            ahead = ahead->next;
            behind = behind->next;
        }
        behind->next = NULL;
        ahead->next = head->next;
        head->next = ahead;
        
        head = ahead->next;
    }                
}
    
};
