/*/Name: Matthew Crepea and Thomas Haumersen
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
  /*Error Check*/
  assert(head != 0 && n > -1 && node != 0 && node->elem != 0);
  /*If temp is null ptr, make head equal to node*/
  if(temp == 0){
    *head = node;
    return;
  }
  /*If n is 0, add node to head*/
  if(n==0){
    add_node(node,head);
    return;
  }

  /*Iterates to position n in the list*/
  while(n>1 && temp->next != 0){
    temp = temp->next;
    n--;
  }
  /*If adding to end of list*/
  if(temp->next == 0){
    temp->next = node;
    node->prev = temp;
    return;
  }
  /*If adding to middle of list*/
  node->next = temp->next;
  node->prev = temp;
  temp->next = node;
  node->next->prev = node;
  return;
}
