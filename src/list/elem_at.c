/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"

void* elem_at(struct s_node* head, int n){
  return node_at(head, n)->elem;
}
