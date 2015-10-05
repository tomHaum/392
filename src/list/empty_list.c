/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"

void empty_list(struct s_node** head){
  while(*head != 0){
    remove_node(head);
  }
}
