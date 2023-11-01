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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd = NULL;
        ListNode* even = NULL;
        ListNode* anchor = NULL;
        ListNode* temp = head;
        int num = 1;
        while(temp){
            anchor = temp->next;
            if(num%2!=0){
                if(!odd){
                    odd = temp;
                }
                else{
                    temp->next = odd->next;
                    odd->next = temp;
                    odd = temp;
                }
            }
            else{
                if(!even){
                    even = temp;
                }
                else{
                    even->next = temp;
                    even = temp;
                }
            }
            if(!anchor && even){
                even->next = NULL;
                return head;
            }
            temp = anchor;
            num++;
        }
        return head;
    }
};