QUESTION :
Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. 
The linked list holds the binary representation of a number.
Return the decimal value of the number in the linked list.
The most significant bit is at the head of the linked list.
  
Example 1:
Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10
  
SOLUTION: 
class Solution {
public:
    int getDecimalValue(ListNode* head) {
       ListNode* temp=head;
        int cnt=0;
        int ans=0;
        while(temp->next!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
       // temp=head;
        while(head!=NULL)
        {
            ans+=(head->val)*(pow(2,cnt--));
            head=head->next;
        }
        return ans;
    }
};
