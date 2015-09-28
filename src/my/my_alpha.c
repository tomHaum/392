/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea Thomas Haumersen
*/
#include "../../include/my.h"

/*Iterates through all capital letters in the Alphabet from A to Z and prints them to the console*/
void my_alpha(){
  char c = 'A'; /*Character that iterates from 'A' to 'Z' and is printed to console*/
  int i; /*Iterator for for loop*/
  /*Iterates c from 'A' to 'Z' and prints them to console*/
  for(i = 0; i < 26; i++)
    my_char(c++);
}
