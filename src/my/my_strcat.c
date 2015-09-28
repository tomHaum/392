/*
/Names: Matthew Crepea, Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea Thomas Haumersen
*/
#include "../../include/my.h"


char *my_strcat(char *a, char *b){
  char* pos = a; /*Holds last character in a*/
  while(*pos)/*pos iterates to last value in a*/
    pos++;
  if(b==0)
    return a;
  /*Iterate through b, adding chars in b to the end of a*/
  while(*b){
    *pos = *b;
    pos++;b++;
  }
  /*Make new null terminator for a*/
  *pos = '\0';
  return a;

}
