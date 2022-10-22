QUESTION :You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
  
Example 1:
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
  
  
SOLUTION : /**
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,value=0;
        ListNode* l3 = new ListNode(0);
        ListNode* head = l3;
        while(l1 && l2)
        {
            value=(l1->val+l2->val+carry);
            l3->next = new ListNode(value%10);
            carry=value/10;
            l1=l1->next;
            l2=l2->next;
            l3=l3->next;
        }
        while(l1)
        {
            value=(l1->val+carry);
            l3->next = new ListNode(value%10);
            carry=value/10;
            l1=l1->next;
            l3=l3->next;
        }
        while(l2)
        {
            value=(l2->val+carry);
            l3->next = new ListNode(value%10);
            carry=value/10;
            l2=l2->next;
            l3=l3->next;
        }
        if(carry)
        {
            l3->next = new ListNode(carry);
        }
        return head->next;
        
    }
};
