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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
       ListNode* t1 = l1;
        ListNode* t2 = l2;
        ListNode* l3 = new ListNode(0);
        ListNode* t3 = l3;
        int carry = 0;
        
        while(t1 != nullptr || t2 != nullptr)
        {            
            int t1d = (t1 != nullptr) ? t1->val : 0;
            int t2d = (t2!= nullptr) ? t2->val : 0;
            int sum = carry + t1d + t2d;
            carry = sum/10;
            int d = sum % 10;
            
            ListNode* newNode = new ListNode(d);
            t3->next = newNode;
            t3 = t3->next;
            
            if (t1 != nullptr)
                t1 = t1->next;
            
            if (t2 != nullptr)
                t2 = t2->next;
        }
        
        if (carry)
        {
            ListNode* newNode = new ListNode(carry);
            t3->next = newNode;
        }   
        
        return l3->next;        
    }
};
