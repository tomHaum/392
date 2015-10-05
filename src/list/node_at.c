/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"

struct s_node* node_at(struct s_node* head, int n){
  if(n<=0 || head == 0){
    return head;
  }
  while(n > 0 && (head->next != 0)){
    head = head->next;
    n--;
  }
  return head;
}
