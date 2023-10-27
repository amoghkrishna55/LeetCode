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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* root = NULL;
        ListNode* t = root;
        int sum = 0;
        while(temp->next){
            sum = 0;
            temp = temp->next;
            while(temp->val!=0){
                sum += temp->val;
                temp = temp->next;
            }
            ListNode* n = new ListNode(sum);
            if(!root){
                root = n;
                t = n;
            }
            else{
                t->next = n;
                t = n;
            }
        }
        return root;
    }
};