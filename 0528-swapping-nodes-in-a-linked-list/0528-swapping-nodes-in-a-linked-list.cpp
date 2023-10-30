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
    ListNode* swapNodes(ListNode* head, int k) {
        int num = 0;
        ListNode* temp = head;
        while(temp){
            num++;
            temp = temp->next;
        }
        ListNode* temp2 = head;
        temp = head;
        for(int i=1;i<k;i++){
            temp = temp->next;
        }
        for(int i=0;i<abs(num-k);i++){
            temp2 = temp2->next;
        }
        swap(temp->val,temp2->val);
        return head;
    }
};