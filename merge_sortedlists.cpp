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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode head(INT_MIN);
        ListNode* temp = &head;
        ListNode* cur1 = NULL;
        ListNode* cur2 = NULL;
        cur1 = l1;
        cur2 = l2;
        while(cur1&&cur2)
        {
            if(cur1->val<cur2->val)
            {
              temp->next = cur1;
              cur1 = cur1->next;
            }
            else{
                temp->next = cur2;
                cur2 = cur2->next;
            }
            temp = temp->next;
        }
        temp->next = cur1 ? cur1:cur2;
        return head.next;
    }
};
