/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea and Thomas Haumersen
*/
#include "../../include/my.h"
/*Return the first index in char* str that char c appears*/
int my_find(char *str, char c){
  int acc = 0; /*Holds current index of string str*/
  /*return -1 for Null pointer*/
  if(str == 0)
    return -1;
  /*Iterates through string, returning acc when c is reached*/
  while(*str != '\0'){
    if(*str == c)
      return acc;
    str++;
    acc++;
  }
  /*return -1 if character is not found*/
  return -1;
}
