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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        int sum = 0;
        ListNode* temp = head;
        while(temp){
            sum++;
            temp = temp->next;
        }
        int part = sum/k;
        int rem = sum%k;
        temp = head;
        ListNode* push = NULL;
        for(int i=0;i<k;i++){
            push = NULL;
            if(temp){
                for(int j=0;j<part;j++){
                    if(!push){
                        push = temp;
                    }
                    else{
                        temp = temp->next;
                    }
                }
                if(rem>0){
                    if(!push){
                        push = temp;
                    }
                    else{
                        temp = temp->next;
                    }
                    rem--;
                }
                if(temp){
                    ListNode* temp2 = temp;
                    temp = temp->next;
                    temp2->next = NULL;
                }
            }
            ans.push_back(push);
        }
        return ans;
    }
};