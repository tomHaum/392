/*
/Names: Matthew Crepea, Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea Thomas Haumersen
*/
#include "../../include/my.h"


int my_atoi(char* str){
	int is_neg = 0; /*flag for whether or not number is negative*/
	/*int num_chars; number of characters in the integer*/
	int ret = 0; /*int value to be returned*/
	/*check for null pointer*/
	if(str == 0){
		return 0;
	}
	/*increment str to the first numeric value in the string*/
	while(!is_digit(*str) && *str != '\0'){
		/*Everytime a negative sign is encountered, flip negative sign*/
	  if(*str == '-'){
		  is_neg = !is_neg;
		}
	  str++;
	}
	/*Read String and increment ret every time*/
	while( is_digit(*str)){
		ret = 10 * ret;
		if(!is_neg){
		  ret += ( (int) *str) - 48;
		}
		else{
		  ret -= (( (int) *str) - 48);
		}
		str++;
	}
	return ret;
}
