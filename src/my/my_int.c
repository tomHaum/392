/*
/Name: Matthew Crepea and Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea and Thomas Haumersen
*/
#include "../../include/my.h"

/*Prints the integer num (input argument) to command line*/
void my_int(int num){
  int max_place = 1; /*holds the highest 'place' of int (10s place, 100s place, etc)*/
  int temp = num; /*Temp variable used to calculate max_place*/
  /*Corner Case: Check if num is min int for 8 bit system, if so print to console*/
  if(num == -2147483648){
    my_str("-2147483648");
    return;
  }
  /*If num is negative, print a negative sign and treat it like a positive num*/
  if(num < 0){
    my_char('-');
    num = num * -1;
    temp *= -1;
  }  
  /*This while loop brings max_place up to the highest place value of num by incrementing*/
  /*temp down and max_place up*/
  while(temp > 9){
    temp = temp / 10;
    max_place = max_place * 10;
  }  
  /*While loop that prints each digit of num from left to right, then gets rid of the highest
   *digit of num and moves the max_place right one digit*/
  while(max_place != 0){
    my_char(num/max_place + '0'); /*Print highest current digit*/
    num = num % max_place; /*remove the highest digit from num*/
    max_place = max_place / 10; /*increment max_place down*/
  } 
}   
