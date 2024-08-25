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
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }

        ListNode* temp = head;
        int length = 1;
        while (temp->next != nullptr) {
            temp = temp->next;
            length++;
        }

        ListNode* back = temp;
        back->next = head;

        k = k % length;
        int stepsToNewHead = length - k;

        ListNode* front = head;
        for (int i = 0; i < stepsToNewHead; i++) {
            back = front;
            front = front->next;
        }
        back->next = nullptr;

        return front;
    }
};