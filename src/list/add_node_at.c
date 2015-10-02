/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "assert.h"

/*
 Adds a node at index n of a list or at the end of the list if n is
 too large.
 Parse once
*/
void add_node_at(struct s_node* node, struct s_node** head, int n){
  struct s_node* temp = *head;
  assert(head != 0);
  if(n==0){
    add_node(node,head);
    return;
  }
  while(n>1 && temp->next != 0){
    temp = temp->next;
    n--;
  }
  if(temp->next == 0){
    temp->next = node;
    node->prev = temp;
    return;
  }
  node->next = temp->next;
  node->prev = temp;
  temp->next = node;
}
