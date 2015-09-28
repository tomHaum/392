/*
/Names: Matthew Crepea, Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea Thomas Haumersen
*/
#include "../../include/my.h"
#include <stdlib.h>

char *my_strconcat(char *a, char *b){

  char *ab;

  char *abRet;
  /*handels if both are null*/
  if(a ==0 && b ==0)
    return 0;
  /*allots memory based on which inputs are null*/
  if(a == 0)
    ab = (char*)malloc(sizeof(char)*(1 + my_strlen(b)));
  else if(b == 0)
    ab = (char*)malloc(sizeof(char)*(1 + my_strlen(a)));
  else
    ab = (char*)malloc(sizeof(char)*(1 +1 + my_strlen(a) + my_strlen(b)));

  /*saves the pointer to the alloted memory*/
  abRet = ab;

  /*pushes contents of a to the new string*/
  while(a!= 0 && *a){

    *ab = *a;
     ab++; a++;
  }

  /*copies the contents of b into the string*/
  while(b != 0 && *b){

    *ab = *b;
    ab++; b++;
  }

  /*cant forget the null terminator*/
  *ab = '\0';

  return abRet;
}
