/*
/Names: Matthew Crepea, Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea Thomas Haumersen
*/
#include "../../include/my.h"
#include <stdlib.h>

/* copies the characters from b into a (overwriting what's already in there)*/
char *my_strcpy(char *a, char *b){
  char *ret = a;
  if(a==0)
      return 0;
  if(b==0)
    return 0;

  /*where the actual copying happens*/
  while(*b){
    *a = *b;
    a++;b++;
  }
  /*that null terminator to end it*/
  *a = '\0';
  return ret;



}
