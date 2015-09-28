/*
/Names: Matthew Crepea, Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea Thomas Haumersen
*/
#include "../../include/my.h"

/*Prints all digits from 0 to 1*/
void my_digits(){
  char c = '0'; /*Character that increments from '0' to '9'*/
  int i; /*Iterator*/
  /*for loop iterates through digits from 0 to 10 and prints them*/
  for(i = 0; i < 10; i++){
    my_char(c++);
  }
}
