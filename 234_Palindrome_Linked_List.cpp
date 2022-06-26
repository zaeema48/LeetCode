/*
Given the head of a singly linked list, return true if it is a palindrome.
*/
bool isPalindrome(ListNode* head) {
        vector <int>arr;
        int pos=0;
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
            pos++;    
        }
        
        int i=0;
        pos--;
        while(i<pos){
            if(arr[i]!=arr[pos])
                return false;
            i++;
            pos--;
        }
        return true;
        
    }