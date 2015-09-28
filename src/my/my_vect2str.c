/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea
*/
#include "../../include/my.h"
#include <stdlib.h>

char* my_vect2str(char** x){
  /*saves the pointer to x*/
  char** vect = x;
  /*for extracting a single element from the vector*/
  char* temp;
  /*two pointers to what we will be returning, so we can iterate over it*/
  char* str;
  char* ret;


  int size = 0;
  int count = 0;
  if(x == 0){
    return 0;
  }
  /*iterates through the vector, counting the number of elements and the length of each element*/
  while(*x){
    size += my_strlen(*x);
    count++;
    x++;
  }

  /*allots for the new string, accounting for spaces*/
  ret = (char *) malloc(sizeof(char) * (size + count));
  str = ret;
  x = vect;

  /*iterating through the vector*/
  while(*x){
    temp = *x;
    /*copying the contents of the element to the end string*/
    while(*temp){
      *str = *temp;
      str++;
      temp++;
    }
    /*adds the space in between the elements of the vector, as long as it is not the last element*/
    if(*(x+1)){
      *str = ' ';
      str++;
    }
    x++;
  }
  /* WOW another null terminator*/
  *str = '\0';
  return ret;
}
