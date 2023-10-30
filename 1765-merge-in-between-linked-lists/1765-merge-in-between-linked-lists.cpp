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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        int i=0;
        for(;i<a-1;i++){
            temp = temp->next;
        }
        ListNode* temp2 = temp;
        for(;i<b+1;i++){
            temp2 = temp2->next;
        }
        temp->next = list2;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = temp2;
        return list1;
    }
};