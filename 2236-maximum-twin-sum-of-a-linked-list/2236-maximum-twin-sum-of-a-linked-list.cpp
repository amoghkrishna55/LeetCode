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
    int pairSum(ListNode* head) {
        int no = 0;
        ListNode* temp = head;
        while(temp){
            no++;
            temp = temp->next;
        }
        temp = head;
        for(int i=0;i<no/2;i++){
            temp = temp->next;
        }
        ListNode* curr = temp;
        ListNode* prev = NULL; 
        ListNode* next = NULL;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        temp = prev;
        int max = INT_MIN;
        while(temp && head){
            if(temp->val+head->val>max){
                max = temp->val+head->val;
            }
            temp = temp->next;
            head = head->next;
        }
        return max;
    }
};