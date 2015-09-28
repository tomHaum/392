/*
 *Name: Matthew Crepea and Thomas Haumersen
 *Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea and Thomas Haumersen
*/
#include "../../include/my.h"

/*returns int of length of the char* str. returns -1 for null pointer, 0 for empty string*/
int my_strlen(char *str){
  int acc = 0; /*Accumulator that holds current length of string*/
  /*For null pointer, return -1*/
  if(str == 0){
    return -1;
  }
  /*Iterate through the char*, incrementing acc up for each character until the end is reached*/
  while(*str != '\0'){
    acc++;
    str++;
  }
  return acc;
}
