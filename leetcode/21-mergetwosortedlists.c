/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void insert(struct ListNode** head, int val){
  struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
  new_node->val = val;
  new_node->next = NULL;

  if (*head == NULL) {
    *head = new_node;
  } else {
    struct ListNode* current = *head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = new_node;
  }
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
  struct ListNode* ll1 = list1;
  struct ListNode* ll2 = list2;
  struct ListNode* head = NULL;
  int val = 0;
  while (ll1 != NULL && ll2 != NULL) {
    if (ll1->val < ll2->val) {
      val = ll1->val;
      ll1 = ll1->next;
    } else {
      val = ll2->val;
      ll2 = ll2->next;
    }
    insert(&head, val);
  }
  while (ll1 != NULL) {
    insert(&head, ll1->val);
    ll1 = ll1->next;
  }

  while (ll2 != NULL) {
    insert(&head, ll2->val);
    ll2 = ll2->next;
  }

  return head;
}
