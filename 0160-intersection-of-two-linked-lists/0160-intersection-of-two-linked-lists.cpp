/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int nodeLength(ListNode *head){
        int val=0;
        while(head!=NULL){
            head = head->next;
            val++;
        }
        return val;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a = nodeLength(headA);
        int b = nodeLength(headB);
        if(a>b){
            while(a>b){
                headA = headA->next;
                a--;
            }
        }
        else if(b>a){
            while(b>a){
                headB = headB->next;;
                b--;
            }
        }

        while(headA && headB){
            if(headA==headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};