/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "../../include/my.h"

/*
 Prints the elem of node as a char
*/
void print_char(struct s_node* node){
  if(node == 0 || node->elem == 0){/*might be too safe, there shouldnt be a node with a null elem*/
    my_str("NULL");
    return;
  }
  my_char(*(char*)(node->elem));
}
