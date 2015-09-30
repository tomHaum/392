/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "assert.h"

void add_node(struct s_node* node, struct s_node** head){
  struct s_node* temp;
  assert(head != 0);

  if(node == 0 || node->elem == 0){
   return;
  }else{
    temp = *head;
    my_str("WTF: ");
    print_int(*head);
    print_int(temp);
    print_int(node);
    my_char('\n');
    /*head = node;
    (*head)->next = temp;
    temp->prev = *head;*/

    (*head)->prev = node;
    node->next = *head;
    *head = node;

    my_str("WTF: ");
    print_int(*head);
    print_int((*head)->next);
    print_int((*head)->next->next);
    my_char('\n');
  }
}
