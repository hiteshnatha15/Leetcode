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
    ListNode* rotateRight(ListNode* head, int k) {
        int count = 1;
        ListNode* temp = head;
        ListNode* tail = NULL;
        while (temp && temp->next) {
            count++;
            temp = temp->next;
        }
        tail = temp;
        k = k % count;
        if (k == 0)
            return head;
        temp = head;
        for (int i = 0; i < count - k - 1; i++) {
            temp = temp->next;
        }
        ListNode* newHead = temp->next;
        temp->next = NULL;
        tail->next = head;
        return newHead;
    }
};