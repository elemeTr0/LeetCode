struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *fast = head, *slow = head;
    
    // Advance `fast` pointer by `n` steps
    for (int i = 0; i < n; i++) {
        if (fast != NULL) {
            fast = fast->next;
        }
    }

    // If `fast` is NULL, the node to remove is the head
    if (fast == NULL) {
        struct ListNode* newHead = head->next;
        free(head);  // Free the head node
        return newHead;
    }

    // Move both `fast` and `slow` until `fast` is at the end of the list
    while (fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    // `slow->next` is the node to remove
    struct ListNode* nodeToRemove = slow->next;
    slow->next = nodeToRemove->next; // Bypass the node to remove
    free(nodeToRemove); // Free the target node

    return head;
}