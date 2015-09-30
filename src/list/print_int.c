/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"

/*
 Prints the elem of node as a in
*/
void print_int(struct s_node* node){
  if(node == 0 || node->elem == 0){/*might be too safe, there shouldnt be a node with a null elem*/
    return;
  }
  my_int(*(int *)(node->elem));
}
