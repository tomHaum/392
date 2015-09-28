/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea and Thomas Haumersen
*/
#include "../../include/my.h"
/*Returns the last index of char* str that the char c appears.*/
char *my_strrindex(char *str, char c){
  /*needs to be changed*/
  char *pos = 0; /*Current 'last index' that c was found in str*/
  int ind = 0; /*Current index of str*/
  /*return -1 for null pointer*/
  if(str == 0){
    return 0;
  }
  /*Iterate through string, updating pos if c is found in str to the current index*/
  while(*str != '\0'){
    if(*str == c){
      pos = str;
    }

    ind++;
    str++;
  }
  return pos;
}
