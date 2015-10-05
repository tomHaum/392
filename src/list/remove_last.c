/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/mylist.h"
#include "assert.h"
#include <stdlib.h>

void* remove_last(struct s_node** head){
    struct s_node* curr;
    void* ret;
    assert(head != 0);
    if(*head == 0){
      return 0;
    }
    curr = *head;
    /*while current node has something after it, iterate*/
    while(curr->next != 0){
      curr = curr->next;
    }
    /*We are now at last node in list*/
    curr->prev->next = 0;
    ret = curr->elem;
    free(curr);
    return ret;
}
