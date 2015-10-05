/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include <stdlib.h>

/*Returns new struct s_node* with elem of elem, next ptr set to next and prev pointer set to previous*/
struct s_node* new_node(void* elem, struct s_node* next, struct s_node* previous){
  struct s_node* myNode = (struct s_node*)malloc(sizeof(struct s_node*));
  myNode->elem = elem;
  myNode->next = next;
  myNode->prev = previous;
  return myNode;
}
