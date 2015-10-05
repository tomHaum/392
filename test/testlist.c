#include "../include/my.h"
#include "../include/mylist.h"
#include <stdlib.h>
#ifndef NULL
#define NULL ((void*)0)
#endif

int main(int argc, char const *argv[]){
  struct s_node** myhead = (struct s_node**)malloc(sizeof(struct s_node**));
  struct s_node* nodeptr;

  int mynum;
  int *mynumptr;
  int mynum2;
  int *mynumptr2;
  int mynum3;
  int *mynumptr3;
  int mynum4;
  int *mynumptr4;
  int mynum5;
  int *mynumptr5;
  int mynum6;
  int *mynumptr6;
  int mynum7;
  int *mynumptr7;
  int mynum8;
  int *mynumptr8;
  mynum = 4;
  mynumptr = &mynum;
  mynum2 = 5;
  mynumptr2 = &mynum2;
  mynum3 = 7;
  mynumptr3 = &mynum3;
  mynum4 = 8;
  mynumptr4 = &mynum4;
  mynum5 = 9;
  mynumptr5 = &mynum5;
  mynum6 = 10;
  mynumptr6 = &mynum6;
  mynum7 = 11;
  mynumptr7 = &mynum7;
  mynum8 = 12;
  mynumptr8 = &mynum8;

  my_str("Length of the list(should be 0): ");
  my_int(count_s_nodes(*myhead));
  my_char('\n');

  *myhead = new_node(mynumptr2,0,0);
  nodeptr = *myhead;

  add_elem(&mynum,myhead);
  my_str("add 4 to front: ");
  traverse_int(*myhead);
  my_char('\n');

  nodeptr = new_node((void *)mynumptr3,0,0);
  my_str("testing print_int");
  print_int(nodeptr);
  my_char('\n');

  my_str("new list(7 appended): ");
  append(nodeptr,myhead);
  traverse_int(*myhead);
  my_char('\n');

  nodeptr = new_node((void *)mynumptr4,0,0);
  add_node(nodeptr,myhead);
  my_str("Added 8 to front: ");
  traverse_int(*myhead);
  my_char('\n');

  nodeptr = new_node((void *)mynumptr5,0,0);
  add_node_at(nodeptr,myhead,1);
  my_str("Added 9 to index 1: ");
  traverse_int(*myhead);
  my_char('\n');

  nodeptr = new_node((void *)mynumptr6,0,0);
  add_node_at(nodeptr,myhead,0);
  my_str("Added 10 to index 0: ");
  traverse_int(*myhead);
  my_char('\n');

  my_str("Length of the list(should be 6): ");
  my_int(count_s_nodes(*myhead));
  my_char('\n');

  debug_int(*myhead);
  my_char('\n');
  my_char('\n');

  my_str("Remove first node(10)\n");
  remove_node(myhead);
  traverse_int(*myhead);
  my_char('\n');
  my_char('\n');
  /*
  my_str("adding 10 back to front\n");
  add_node(nodeptr,myhead);
  traverse_int(*myhead);
  my_char('\n');
  my_char('\n');
  */
  my_str("remove second elem\n");
  my_int(*((int *) remove_node_at(myhead,1)));
  my_char('\n');
  traverse_int(*myhead);
  my_char('\n');

  my_str("remove last elem\n");
  my_int(*((int *) remove_last(myhead)));
  my_char('\n');
  traverse_int(*myhead);
  my_char('\n');

  while((*myhead)->next){
    my_char('x');
    remove_node_at(myhead, 1);
  }
  traverse_int(*myhead);
  my_str("\nRemoved all but head\n");
  traverse_int(*myhead);
  my_char('\n');

  add_elem(mynumptr7,myhead);
  add_elem(mynumptr8,myhead);

  traverse_int(*myhead);

  my_str("\nAttempting to print empty list...\n");
  empty_list(myhead);
  my_str("trying to print\n");
  traverse_int(*myhead);
  if(myhead == 0)
    my_str("head is null");
  if(*myhead == 0)
    my_str("head pointing to null");



}

