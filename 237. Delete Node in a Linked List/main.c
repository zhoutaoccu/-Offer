/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

void deleteNode(struct ListNode* node) {
    if (node == NULL || node->next == NULL) return;

    node->val = node->next->val;
    node->next = node->next->next;
    

}