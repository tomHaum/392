/*
/Names: Matthew Crepea, Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea Thomas Haumersen
*/
#include "../../include/my.h"
#include <stdlib.h>

char *my_strnconcat(char *a, char *b, int n){

  char *ab;

  char *abRet;
  /*handles when both a inputs are null*/
  if(a ==0 && b ==0)
    return 0;
  /*allots the memory based on which inputs are null, and big n is*/
  if(a == 0)
    /*this allots for either the size of b or the length of n, which ever is shorter*/
    ab = (char*)malloc(sizeof(char)*(1 + ( n < my_strlen(b)? n: my_strlen(b))));
  else if(b == 0)
    ab = (char*)malloc(sizeof(char)*(1 + my_strlen(a)));
  else
    ab = (char*)malloc(sizeof(char)*(1 +1 + my_strlen(a) + ( n < my_strlen(b)? n: my_strlen(b))));

  abRet = ab;

  /*transgers contents of a to the return string*/
  while(a!= 0 && *a){

    *ab = *a;
     ab++; a++;
  }
  /*transfers n characters of b to the return string*/
  while(b != 0 && *b && n >0){

    *ab = *b;
    ab++; b++;n--;
  }
  /*oh boy it is a null terminator again*/
  *ab = '\0';

  return abRet;

}
