class Solution {
public:
    void sortedNode(ListNode* &head){
        bool val = true;
        while(val){
            bool test = true;
            ListNode* temp = head;
            while(temp->next!=NULL){
                if(temp->val>temp->next->val){
                    swap(temp->val,temp->next->val);
                    test = false;
                }
                temp = temp->next;
            }
            if(test){
                val = false;
            }
        }
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode* temp = list1;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = list2;
        sortedNode(list1);
        return list1;
    }
};
