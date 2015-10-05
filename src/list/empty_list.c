/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "assert.h"

void empty_list(struct s_node** head){
  assert(head != 0);
  while(*head != 0) remove_node(head);
}
