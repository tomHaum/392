/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Cerpea and Thomas Haumersen
*/
#include "../../include/my.h"

/*print int n in numbase of char* str*/
void my_num_base(int n, char *str){
  int b;
  int pwr;
  int neg = 1;
  /*doesnt attempt max neg*/

  /*exit if str is empty string or null pointer*/
  if(str == 0 || *str == '\0')
    return;
  /*Print negative sign for negative number*/
  if(n < 0){
    /*n = n * -1;*/
    neg = -1;
    my_char('-');
  }
  b = my_strlen(str); /*integer representation of 'base' of number (base 2, base 10, etc)*/
  pwr = b; /*Iterator used to express current highest power for n*/
  /*Unary case: print the single char n times*/
  if(b == 1){
    while(n > 0){
      my_char(*str);
      n = n - 1;
    }
    return;
  }
  /*if n is 0, print the first char*/
  if(n==0){
    my_char(*str);
    return;
  }
  /*increment pwr up until it is the highest power of b that n is*/
  while((neg == 1)? n/b >= pwr: n/b<=pwr*neg)
    pwr = pwr * b;
  /*pwr = pwr / b;*/
  /*Print the 'highest power' digit of n, then get rid of that digit and increment pwr down*/
  /*my_str("testing: \n");*/
  while(pwr > 0){
    /*my_int(n);*/
    /*my_char(' ');*/
    /*my_int(neg*(n/pwr));*/
    /*my_char('\n');*/
    /*my_int(neg*(n/pwr));*/
    my_char(str[neg*(n/pwr)]); /*prints highest pwr digit of n*/
    n = n % pwr; /*get rid of highest digit of n*/
    pwr = pwr /b; /*increment pwr down*/

  }
  my_char('\n');
}
