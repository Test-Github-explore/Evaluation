// MEM30-C: Noncompliant Code Example
#include <stdlib.h>
  
struct node {
  int value;
  struct node *next;
};
  
void free_list(struct node *head) {
  for (struct node *p = head; p != NULL; p = p->next) {
    free(p);
  }
}

int main(void) {
  struct node *head = malloc(sizeof(struct node));
  if (head == NULL) {
    /* Handle error */
  }
  head->next = NULL;
  free_list(head);
  return 0;
}
