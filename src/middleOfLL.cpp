//
// Created by akshay on 5/16/19.
//

#include "../include/all.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class middleLL {
public:


    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        if(fast->next == NULL)
            return slow;
        else
            return  slow->next;
    }
};
