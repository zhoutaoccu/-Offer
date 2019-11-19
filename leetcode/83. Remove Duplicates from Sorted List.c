 struct ListNode {
     int val;
     struct ListNode *next;
 };

struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* temp = head;
    while(temp) {
        while (temp->val == temp->next->val && temp->next) {
            temp->next = temp->next->next;
        }
        
        temp = temp->next;
    }
    return head;
}
