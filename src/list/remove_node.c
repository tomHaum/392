/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "assert.h"
#include <stdlib.h>

void* remove_node(struct s_node** node){
  void* ret;
  struct s_node* temp;
  /*Error Checking*/
  assert(node != 0);
  if(*node == 0){
    return 0;
  }

  ret = (*node)->elem;
  temp = *node;
  /*Increment head node up one, and remove new heads prev pointer*/
  *node = (*node)->next;

  /*If node originally had a prev element, make that prev element point to the node after temp*/
  if((temp)->prev != 0){
    (temp)->prev->next = (*node);
  }
  /*If node is not null, change its prev pointer to the previous of temp*/
  if(*node != 0){
    (*node)->prev = temp->prev;
  }

  free(temp);
  return ret;
}
