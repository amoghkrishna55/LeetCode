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
    void reorderList(ListNode* head) {
     ListNode* temp = NULL;
     ListNode* start = head;
     ListNode* prev = NULL;
     int trigger = 1;
     while(start!=NULL && start->next!=NULL){
        if(trigger==1){
            trigger = 0;
            temp = start;
        }
        if(temp->next!=NULL){
            prev = temp;
            temp = temp->next;
            continue;
        }
        trigger = 1;
        prev->next = NULL;
        temp->next = start->next;
        start->next = temp;
        start = temp->next;
     }
    }
};