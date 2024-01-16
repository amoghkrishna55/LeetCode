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
        if (!head || !head->next) {
            return head;
        }
        ListNode* ans = NULL;
        ListNode* temp = NULL;
        while (head) {
            if (!head->next || (head->val != head->next->val)) {
                if (ans == NULL) {
                    ans = head;
                    temp = ans;
                } else {
                    temp->next = head;
                    temp = temp->next;
                }
                head = head->next;
            } else {
                ListNode* idk = head;
                while (idk->next && idk->val == idk->next->val) {
                    idk = idk->next;
                }
                head = idk->next;
            }
        }
        if (temp) {
            temp->next = nullptr;
        }
        return ans;
    }
};