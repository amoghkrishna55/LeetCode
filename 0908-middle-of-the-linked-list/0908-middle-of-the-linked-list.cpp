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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* temp = head;
        int t = 0;
        while(temp){
            t++;
            temp = temp->next;
        }
        temp = head;
        if(t%2!=0){
            for(int i=1;i<(t+1)/2;i++){
                temp = temp->next;
            }
        }
        else{
            for(int i=1;i<(t/2)+1;i++){
                temp = temp->next;
            }
        }
        return temp;
    }
};