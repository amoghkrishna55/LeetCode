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
        ListNode* temp = head;
        if(!temp || !temp->next){
            return head;
        }
        int sum=0;
        while(temp){
            sum++;
            temp = temp->next;
        }
        k = k%sum;
        while(k--){
            temp = head;
            while(temp->next->next){
                temp = temp->next;
            }
            temp->next->next = head;
            head = temp->next;
            temp->next = NULL;
        }
        return head;
    }
};