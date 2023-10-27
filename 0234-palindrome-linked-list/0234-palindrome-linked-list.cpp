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
    bool isPalindrome(ListNode* head) {
        int sum = 0;
        ListNode* temp = head;
        while(temp){
            sum++;
            temp = temp->next;
        }
        int start = 0;
        temp = head;
        ListNode* p = NULL;
        if(sum%2==0) start = sum/2;
        else start = (sum+1)/2;
        for(int i=0;i<start;i++){
            p = temp;
            temp = temp->next;
        }
        ListNode* current = temp;
        ListNode *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        temp = prev;
        p->next=  NULL;
        while(temp && head){
            if(temp->val!=head->val){
                return false;
            }
            temp = temp->next;
            head = head->next;
        }
        return true;
    }
};