/*
/Names: Matthew Crepea, Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea Thomas Haumersen
*/
#include "../../include/my.h"
#include <stdlib.h>
/*Help function to my_str2vect
 * Returns copy of string up to the next space, tab, newline, or
 * string end.
 */
char* copy_to_ws(char* str){
	char *temp = str;
	int accum = 0; /*Holds number of characters up to next blank space*/
	int i = 0; /*Iterates through str, putting values into temp*/
	/*Count values to next whitespace - stored in accum*/
	while (*temp != ' ' && *temp != '\n' && *temp != '\t' && *temp != '\0'){
		temp++;
		accum++;
	}
	temp = (char*) malloc (accum + 1); /*Allocate new memory for temp*/
	/*Iterate through str, copying values into temp*/
	for(i = 0; i < accum; ++i){
		temp[i] = str[i];
	}
	temp[accum] = '\0';
	return temp;
}
