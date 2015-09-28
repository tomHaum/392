/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea and Thomas Haumersen
*/
#include "../../include/my.h"

/*Reverses the values in char* str, and returns int of the length of the char*  */
int my_revstr(char *str){
  char *endptr = str; /*second pointer the iterates from end of string towards beginning*/
  int len = 0; /*Holds length of string*/
  char temp = 0; /*temp char used when switching characters*/
  /*Return -1 for null pointer*/
  if(str == 0)
    return -1;
  /*return 0 for empty string*/
  if(*str == '\0')
    return 0;
  /*Iterate endptr until it reaches end of str, iterating len as well*/
  while(*endptr != '\0'){
    len++;
    endptr++;
  }   
  
  endptr--; /*Used so that endptr is not left on null character*/
  /*Iterate str and endptr pointers forward and backwards, swapping all of their characters*/
  while(str < endptr){
    /*swaps chars in str and endptr current locations*/
    temp = *str;
    *str = *endptr;
    *endptr = temp;
    /*increment str and endptr*/
    str++;
    endptr--;
  } 
  return len;
}  
