/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea and Thomas Haumersen
*/
#include "../../include/my.h"
/*Returns the last index of char* str that the char c appears.*/
int my_rfind(char *str, char c){
  int pos = -1; /*Current 'last index' that c was found in str*/
  int ind = 0; /*Current index of str*/
  /*return -1 for null pointer*/
  if(str == 0){
    return -1;
  }
  /*Iterate through string, updating pos if c is found in str to the current index*/
  while(*str != '\0'){
    if(*str == c){
      pos = ind;
    }

    ind++;
    str++;
  }
  return pos;
}
