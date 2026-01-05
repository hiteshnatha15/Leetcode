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
    ListNode* reverseLinkedList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while (temp) {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* newHead = new ListNode(0);
        newHead->next = head;
        ListNode* prevEnd = newHead;
        while (true) {
            ListNode* kthEnd = prevEnd;
            for (int i = 0; i < k && kthEnd; i++) {
                kthEnd = kthEnd->next;
                if (!kthEnd)
                    return newHead->next;
            }
            ListNode* nextStart = kthEnd->next;
            ListNode* kthStart = prevEnd->next;
            kthEnd->next = NULL;
            ListNode* temp = reverseLinkedList(kthStart);
            prevEnd->next = temp;
            kthStart->next = nextStart;
            prevEnd = kthStart;
        }
        return newHead->next;
    }
};