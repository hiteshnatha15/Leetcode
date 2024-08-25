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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while (temp) {
            count++;
            temp = temp->next;
        }
        int cnt = count - n;
        if (n == count)
            return head->next;
        temp = head;
        while (temp) {
            cnt--;
            if (cnt == 0)
                break;
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};