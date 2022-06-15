/*
Given the head of a singly linked list, reverse the list, and return the reversed list.
*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        struct ListNode* ptr=head, *prvs=NULL;
        while(head!=NULL){
            ptr=head->next;
            head->next=prvs;
            prvs=head;
            head=ptr;
        }
        head=prvs;
        return head;
    }
};