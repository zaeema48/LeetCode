/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.
*/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       if(list1==NULL && list2==NULL)
           return NULL; 
        struct ListNode *list = (struct ListNode*)malloc (sizeof(struct ListNode));
       struct ListNode *cur=list;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                cur->next=list1;
                list1=list1->next;
                cur=cur->next;
            }
            else{
                cur->next=list2;
                list2=list2->next;
                cur=cur->next;
            }
        }
        if(list1!=NULL)
            cur->next=list1;
        if(list2!=NULL)
            cur->next=list2;
        return list->next;
    }
};