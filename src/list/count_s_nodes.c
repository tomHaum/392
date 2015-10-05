/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"

int count_s_nodes(struct s_node* head){
  int acc = 0; /*Count number of s nodes*/
  /*Iterate through list, counting s_nodes*/
  while(head!= 0){
    head = head->next;
    acc++;
  }
  return acc;
}
