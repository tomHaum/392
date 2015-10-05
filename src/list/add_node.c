/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "assert.h"

void add_node(struct s_node* node, struct s_node** head){
  /*Exit on null node or elem or head*/
  assert(head != 0 && node != 0 && node->elem != 0);
  /*Case: Empty List*/
  if(*head == 0){
    *head = node;
    return;
  }
  /*Case: Non-Empty List [At least 1 element]*/
  (*head)->prev = node;
  node->next = *head;
  *head = node;

}
