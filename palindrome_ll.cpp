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
        ListNode* cur = NULL;
        vector<int> vec;
        cur = head;
        while(cur!=NULL)
        {
            vec.push_back(cur->val);
            cur = cur->next;
        }
        int n = vec.size();
        for(int i = 0;i<n/2;i++)
        {
            if(vec[i]!=vec[n-i-1])
                return false;
        }
        return true;
    }
};
