/*
 *Author: Matthew Crepea and Thomas Haumersen
 *Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea Thomas Haumersen
 */
#include "../../include/my.h"
#include <stdlib.h>

char* my_strdup(char* x){
  char* dup;
  int i;
  int len;
  if(x == 0){
    return 0;
  }
  /*calculates the length of the input string*/
  len = my_strlen(x);
  /*allocates the memory for the new string*/
  dup = (char*) malloc(sizeof(char) * (len + 1));

  /*transfer of the data*/
  for(i = 0; i < len; ++i){
    dup[i] = x[i];
  }
  /*that pesky null terminator*/
  dup[len] = '\0';
  return dup;
}
