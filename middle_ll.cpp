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
    ListNode* middleNode(ListNode* head) {
        ListNode *current = head;
        int count = 1;
        while(current->next!=NULL)
        {
            count += 1;
            current = current->next;
        }
        ListNode *current1 = head;
        for(int i = 0;i<count/2;i++)
        {
            current1 = current1->next;
        }
        head = current1;
        return head;
    }
};
