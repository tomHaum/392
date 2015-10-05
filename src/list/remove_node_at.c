/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "assert.h"
#include <stdlib.h>

void* remove_node_at(struct s_node** head, int n){
  void* ret;
  struct s_node* curr;
  assert(head != 0 && n>=0);
  if(*head == 0){
    return 0;
  }
  if(n == 0){
    return remove_node(head);
  }
  curr = *head;
  /*Loop for iterating to position n, or last in list*/
  while(n > 0 && curr->next != 0){
    curr = curr->next;
    n--;
  }
  ret = curr->elem;
  /*Change pointer for node after curr*/
  if(curr->next != 0){
    curr->next->prev = curr->prev;
  }
  /*Change pointer for node before curr*/
  if(curr->prev != 0){
    curr->prev->next = curr->next;
  }
  free(curr);
  return ret;
}
