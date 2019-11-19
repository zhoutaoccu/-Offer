
 struct ListNode {
     int val;
     struct ListNode *next;
 };
 

/* iteratively */
struct ListNode* reverseList(struct ListNode* head){
    if((!head) || !(head->next))
        return head;

    struct ListNode* prev = NULL;
    struct ListNode* current = NULL;

    while (head){
        current = head;
        head = head->next;

        current->next = prev;
        prev = current;
    }

    head = current;
    return head;
}

