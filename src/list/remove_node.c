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
  if(*node != 0){
    (*node)->prev = 0;
  }
  free(temp);
  return ret;
}
