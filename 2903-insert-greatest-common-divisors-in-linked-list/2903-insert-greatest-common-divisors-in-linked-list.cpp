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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head){
            return head;
        }
        ListNode* t1 = NULL;
        ListNode* t2 = NULL;
        t1 = head;
        t2 = head->next;
        while(t1 && t2){
            ListNode* n = new ListNode(gcd(t1->val,t2->val),t2);
            t1->next = n;
            t1 = t2;
            if(t2->next) t2 = t2->next;
            else break;
        }
        return head;
    }
};