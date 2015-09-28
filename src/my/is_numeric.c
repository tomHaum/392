/*
/Names: Matthew Crepea, Thomas Haumersen
/Pledge: I pledge my honor that I have abided by the Stevens Honor System. Matthew Crepea Thomas Haumersen
*/
#include "../../include/my.h"
/*
 * Helper function for my_atoi
 * Returns int as bool for whether or not char c is numeric
 * That is, '0' '1' '2' '3' '4' '5' '6' '7' '8' '9' '-'
 */
int is_numeric(char c){
	return (c >= '0' && c <= '9') || c == '-';
}
