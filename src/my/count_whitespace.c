/*
/Names: Matthew Crepea, Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea Thomas Haumersen
*/
#include "../../include/my.h"
/*Helper function for str2vect
 * Count 'blocks of whitespace in str'
 * IE, for "a b", 1 is returned
 * for "a \n b cde   f", 3 is returned
 */
int count_whitespace(char* str){
	int accum = 0; /*Counter for blocks of whitespace*/
	/*Iterate through str, incrementing str when whitespace is found*/
	while(*str != '\0'){
	  /*When Whitespace is found, iterate until non-whitespace is found*/
		if(*str == ' ' || *str == '\n' || *str == '\t'){
			accum++;
			/*keeps going until the whitespace is over*/
			while(*str == ' ' || *str == '\n' || *str == '\t'){
				str++;
			}
		}
		else{
			str++;
		}
	}
	return accum;
}
