/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "../../include/my.h"

/*
 Prints all the elems as chars separated by a space in the format
 (NULL <- Elem -> Next elem), ..., (Previous elem <- Elem -> NULL)
*/
void debug_char(struct s_node* head){
  /*Empty List*/
  if(head == 0){
    my_str("Empty List.");
    return;
  }

  my_str("(");
  print_char(head->prev);
  my_str(" <- ");
  print_char(head);
  my_str(" -> ");
  print_char(head->next);
  my_str(")");
  while(head->next != 0){
    head = head->next;
    my_str(", (");
    print_char(head->prev);
    my_str(" <- ");
    print_char(head);
    my_str(" -> ");
    print_char(head->next);
    my_str(")");
  }
}
