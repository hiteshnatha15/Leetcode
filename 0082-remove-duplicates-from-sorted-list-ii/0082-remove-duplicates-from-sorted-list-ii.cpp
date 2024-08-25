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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int, int> mp;
        ListNode* temp = head;
        while (temp!=NULL) {
            mp[temp->val]++;
            temp=temp->next;
        }
        ListNode* newHead = new ListNode();
        ListNode* tail = newHead;
        for (auto num : mp) {
            if (num.second == 1) {
                tail->next = new ListNode(num.first);
                tail = tail->next;
            }
        }
        return newHead->next;
    }
};