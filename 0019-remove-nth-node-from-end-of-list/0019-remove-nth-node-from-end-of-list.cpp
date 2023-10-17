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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int total = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp=temp->next;
            total++;
        }
        cout << total;
        if(total-n==0){
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        temp = head;
        for(int i=1;i<total-n;i++){
            temp = temp->next;
        }
        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;
        return head;
    }
};