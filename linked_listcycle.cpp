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
        if(head==NULL)
            return false;
        ListNode *walk = head;
        ListNode *run = head;
        while(run->next!=NULL&&run->next->next!=NULL)
        {
            walk = walk->next;
            run = run->next->next;
            if(walk==run)
                return true;
        }
        return false;
    }
};
