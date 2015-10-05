/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "assert.h"

struct s_node* node_at(struct s_node* head, int n){
  assert(head != 0 && n > -1);
  while(n > 0 && (head->next != 0)){
    head = head->next;
    n--;
  }
  return head;
}
