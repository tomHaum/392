/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "../../include/my.h"

/*
 Prints all the elems as ints separated by a space
*/
void traverse_string(struct s_node* head){
  if(head == 0){
    return;
  }
  print_string(head);
  while(head->next != 0){
    my_char(' ');
    head = head->next;
    print_string(head);
  }
}
