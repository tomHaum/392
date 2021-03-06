/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "../../include/my.h"

/*
 Prints all the elems as strings separated by a space in the format
 (NULL <- Elem -> Next elem), ..., (Previous elem <- Elem -> NULL)
*/
void debug_string(struct s_node* head){
  /*Empty List*/
  if(head == 0){
    my_str("Empty List.");
    return;
  }
  my_str("(");
  print_string(head->prev);
  my_str(" <- ");
  print_string(head);
  my_str(" -> ");
  print_string(head->next);
  my_str(")");
  while(head->next != 0){
    head = head->next;
    my_str(", (");
    print_string(head->prev);
    my_str(" <- ");
    print_string(head);
    my_str(" -> ");
    print_string(head->next);
    my_str(")");
  }
}
