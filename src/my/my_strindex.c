/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea and Thomas Haumersen
*/
#include "../../include/my.h"
/*Return the first index in char* str that char c appears*/
char *my_strindex(char *str, char c){
  /*needs to be changed*/
  int acc = 0; /*Holds current index of string str*/
  /*return -1 for Null pointer*/
  if(str == 0){
    /*my_str("nulllll\n");*/
    return 0;
  }

  /*Iterates through string, returning acc when c is reached*/
  while(*str != '\0'){
    if(*str == c)
      return str;
    str++;
    acc++;
  }
  /*return -1 if character is not found*/
  return 0;
}
