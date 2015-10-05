/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "assert.h"
/*
 Adds a node to the end of a list. DO NOT add a NULL pointer or
 a node with a NULL elem.
 Parse once
*/
void append(struct s_node* node, struct s_node** head){
  struct s_node* temp;
  assert(head != 0 && node != 0 && node->elem != 0);
  /*Case: Empty List*/
  if(*head == 0){
    *head = node;
    return;
  }

  /*Case: 1 element in the list*/
  if((*head)->next == 0){
    /*my_str("head was only item in list...");*/
    (*head)->next = node;
    node->prev = *head;
    return;
  }

  /*append(node,head->next);*//*recursive solution*/
  temp = *head;
  /*Iterate to the end of the list*/
  while(temp->next != 0){
    temp = temp->next;
  }
  temp->next = node;
  node->prev = temp;
}
