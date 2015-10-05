/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "assert.h"

/*
 Creates a new node with elem and adds it to head. DO NOT add a NULL
 elem.
 DOES NOT PARSE
*/
void add_elem(void* elem, struct s_node** head){
  struct s_node* node;
  /*Error Checking*/
  assert(head != 0 && elem != 0);
  /*Add the element*/
  node = new_node(elem,0,0);
  add_node(node,head);
}
