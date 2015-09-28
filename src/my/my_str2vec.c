/*
/Names: Matthew Crepea, Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea Thomas Haumersen
*/
#include "../../include/my.h"
#include <stdlib.h>
/*takes a string that seperates sub elements with spaces
 * and returns vector with each substring as its own string
 */
char **my_str2vect(char* str){
	char **vec;/*the pointer to the vector we are returning*/
	int n;/*the number of elements in the array*/
	int i = 0;
	if (str == 0){
		return 0;
	}
	/*goes until the first letters of the source string*/
  while (*str == ' ' || *str == '\n' || *str == '\t'){
    str++;
  }
	/*gets the number of elements in the array, plus one for the extra null pointer*/
	n = count_whitespace(str) + 1;

	/*Allocates the memory for the vector*/
	vec = (char **)malloc(sizeof(char *)*n);

	/*iterating through all the elements slots of the vector*/
	for(i = 0; i < n; ++i){
		vec[i] = copy_to_ws(str);
		/*moving the str pointer up to the next element*/
		while (*str != ' ' && *str != '\n' && *str != '\t' && *str != '\0'){
			str++;
		}
		while (*str == ' ' || *str == '\n' || *str == '\t'){
			str++;
		}
	}
	/*add the null pointer to the end of the vector*/
	vec[n] = 0;
	return vec;
}
