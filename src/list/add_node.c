/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "assert.h"

void add_node(struct s_node* node, struct s_node** head){
  struct s_node* temp;
  assert(head != 0);

  if(node == 0 || node->elem == 0)
   return;
  node->next = 0;
  node->prev = 0;

  temp = *head;
  (*head)->prev = node;
  node->next = *head;
  *head = node;

}
