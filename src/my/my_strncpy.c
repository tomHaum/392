/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea
*/
#include "../../include/my.h"

/*copies the characters from b into a (overwriting what's already in there) up to n characters*/
char *my_strncpy(char *a, char *b, int n){
  /*making sure not to lose the pointer to a*/
  char *ret = a;

  if(a==0)
    return 0;
  if(b==0)
    return 0;

  /*overwriting the content of a with b, stoping at either the end of b or after n characters*/
  while(*b && n >0){

    *a = *b;
    a++;b++;n--;
  }
  /*hey look another null terminator*/
  *a = '\0';
  return ret;



}
