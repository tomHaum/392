/*
/Names: Matthew Crepea, Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea Thomas Haumersen
*/
#include "../../include/my.h"

int my_strncmp(char *a, char *b, int n){

  if (a == 0) {
    /*if they are both zero then they are the same*/
    if (b == 0)
      return 0;
    /*otherwise the b is bigger than a(which is zero)*/
    return -1;
  }

  /*at this point we know that a is not 0*/
  if (b == 0)
    return 1;/*anything is bigger than zero(the value of b*/

  /*this is looping while the two characters are the same but also not a null terminator*/
  while (*a == *b && !(*a == '\0' || *b == '\0')) {
    if (n <= 0)
      break;
    a++;
    b++;
    n--;

  }
  /*at this point we know that that we are looking at two potentially different characters*/
  if (*a == *b) {
    return 0;
  }
  if (*a > *b)
    return 1;
  return -1;

}
