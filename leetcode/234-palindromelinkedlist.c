/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
  struct ListNode* jump = head;
  struct ListNode* current = head;
  struct ListNode* prev = NULL;
  struct ListNode* next = NULL;

  while (jump != NULL && jump->next != NULL) {
    jump = jump->next->next;
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }

  if (jump != NULL) {
    current = current->next;
  }

  while (prev != NULL && current != NULL) {
    if (prev->val != current->val) {
      return false;
    }
    prev = prev->next;
    current = current->next;
  }

  return true;
}
