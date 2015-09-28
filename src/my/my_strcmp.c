/*
/Names: Matthew Crepea, Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea Thomas Haumersen
*/
#include "../../include/my.h"

int my_strcmp(char *a, char *b){
  if(a==0){
    /*Both Null: Return 0*/
    if(b == 0)
      return 0;
    /*a null and b not: return -1*/
    return -1;
  }
  /*b null and a not: return 1*/
  if(b == 0)
    return 1;
  /*Iterate through until characters are not the same*/
  while(*a == *b && !(*a == '\0' || *b == '\0')){
    a++;b++;
  }
  /*Return 0 for same strings*/
  if(*a == *b){
    return 0;
  }
  /*When different characters occur and a > b, return 1*/
  if(*a > *b)
    return 1;
  /*For different characters and a < b, return -1*/
  return -1;

}
