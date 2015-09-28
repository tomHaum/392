/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea
*/
#include "../../include/my.h"

/*Prints char* str to the console*/
void my_str(char *str){
  /*Exit program for null pointer*/
  if(str == 0)
    return;
  /*Iterate through all values in the char*, printing each char*/
  while(*str != '\0'){
    my_char(*str);
    str++;
  }

}
