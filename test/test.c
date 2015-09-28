#include "my.h"
#include <stdlib.h>
#ifndef NULL
#define NULL ((void*)0)
#endif

int main(int argc, char const *argv[]){

	/*Variable Declarations for Testing*/
	char str[] = {'H','E','L','L','O','\0'};
	char* temp;
	char strvec[] = {'a','b','c',' ','d','e','f',' ','g','h','i','\0'};
	char tester[] = {'h', 'e', 'l', 'l', 'o', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};
	char tester2[] = {'h', 'e', 'l', 'l', 'o', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};
	char tester3[] = {'h', 'e', 'l', 'l', 'o', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};
	char** vect = (char**) malloc(sizeof(char*) * 4);
	char** my_vect;
	int maxneg = 1 <<(8*sizeof(int)-1);
	vect[0] = tester;
	vect[1] = tester2;
	vect[2] = tester3;
	vect[3] = 0;


	/*Testing my_str()*/
	my_str("Testing my_str()\n----------------------------------------------\n");
	my_str(NULL);
	my_str("");
	my_str("Hello \n \n");

	//Testing my_int()
	my_str("\nTesting my_int()\n----------------------------------------------\n");
	my_int(-5); 		my_str("\t|\t-5\n");
	my_int(-156); 		my_str("\t|\t-156\n");
	my_int(0);			my_str("\t|\t0\n");
	my_int(3);			my_str("\t|\t3\n");
	my_int(30);			my_str("\t|\t30\n");
	my_int(maxneg);		my_str("\t|\tMax Neg\n");

	//Testing my_num_base();
	my_str("\nTesting my_num_base()\n----------------------------------------------\n");
	my_num_base(17, NULL);						my_str("\t|\tNULL\n");
	my_num_base(17, "");						my_str("\t|\tEmpty Set\n ");
	my_num_base(5, "A");						my_str("\t|\tSingle Char - \"AAAAAA\"\n ");
	my_num_base(-5, "A");						my_str("\t|\tSingle Char Neg - \"-AAAAA\"\n ");
	my_num_base(0, "01");						my_str("\t|\tZero - \"0\"\n ");
	my_num_base(4, "012345");					my_str("\t|\tSingle Digit - \"4\"\n ");
	my_num_base(18, "01");						my_str("\t|\tDouble Digit - \"10010\"\n ");
	my_num_base(-7, "0123456789ABCDEF");		my_str("\t|\tSingle Digit Negative - \"-7\"\n");
	my_num_base(-195, "0123456789ABCDEF");		my_str("\t|\tDouble Digit Negative - \"-C3\"\n");
	my_num_base(maxneg, "0123456789");			my_str("\t|\tTest Max Negative - \""); my_int(maxneg); my_str("\"\n\n");

	//Testing Alpha and Digits
	my_str("\nTesting my_alpha and my_digits()\n----------------------------------------------\n");
	my_alpha();		my_str("\t|\tAlpha - ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");
	my_digits();	my_str("\t|\tDigits - 0123456789\n");

	//Testing my_strlen()
	my_str("\nTesting my_strlen()\n----------------------------------------------\n");
	my_int(my_strlen(NULL));	my_str("\t|\tNULL - \"-1\"\n");
	my_int(my_strlen(""));		my_str("\t|\tEmpty String - \"0\"\n");
	my_int(my_strlen("Hello"));	my_str("\t|\tRegular String - \"5\"\n");

	//Testing my_revstr
	my_str("\nTesting my_revstr()\n----------------------------------------------\n");
	my_int(my_revstr(NULL));	my_str("\t|\tNULL - \"-1\"\n*");
	my_int(my_revstr(""));		my_str("\t|\tEmpty String - \"0\"\n");
	my_int(my_revstr(str));		my_str("\t|\tRegular String Return - \"5\"\n");
	my_str(str);				my_str("\t|\tRegular String Changed - \"OLLEH\"\n");
	
	//Testing my_strindex()
	my_str("\nTesting my_find()\n----------------------------------------------\n");
	my_int(my_find(NULL, 'a'));		my_str("\t|\tNULL - \"-1\"\n");
	my_int(my_find("", 'a'));		my_str("\t|\tEmpty String - \"-1\"\n");
	my_int(my_find("Hello", 'e'));	my_str("\t|\tFound in String - \"1\"\n");
	my_int(my_find("Hello", 'z'));	my_str("\t|\tNot Found in String - \"-1\"\n");

	//Testing my_strrindex()
	my_str("\nTesting my_rfind()\n----------------------------------------------\n");
	my_int(my_rfind(NULL, 'a'));		my_str("\t\t|\tNULL - \"-1\"\n");
	my_int(my_rfind("", 'a'));		my_str("\t\t|\tEmpty String - \"-1\"\n");
	my_int(my_rfind("Hello", 'l'));	my_str("\t\t|\tFound in String - \"3\"\n");
	my_int(my_rfind("Hello", 'z'));	my_str("\t\t|\tNot Found in String - \"-1\"\n");

	/*Testing my_strindex()	 */
	my_str("\nTesting my_strindex()\n----------------------------------------------\n");
	my_str(my_strindex(NULL, 'a'));     my_str("\t|\tNULL - \"\"\n");
	my_str(my_strindex("", 'a'));       my_str("\t|\tEmpty String - \"\"\n");
	my_str(my_strindex("Hello", 'e'));  my_str("\t|\tFound in String - \"ello\"\n");
	my_str(my_strindex("Hello", 'l'));  my_str("\t|\tFound in String - \"llo\"\n");
	my_str(my_strindex("Hello", 'z'));  my_str("\t|\tNot Found in String - \"\"\n");

	/*Testing my_strindex()  */
  my_str("\nTesting my_strrindex()\n----------------------------------------------\n");
  my_str(my_strrindex(NULL, 'a'));      my_str("\t|\tNULL - \"\"\n");
  my_str(my_strrindex("", 'a'));        my_str("\t|\tEmpty String - \"\"\n");
  my_str(my_strrindex("Hello", 'e'));   my_str("\t|\tFound in String - \"ello\"\n");
  my_str(my_strrindex("Hello", 'l'));   my_str("\t|\tFound in String - \"lo\"\n");
  my_str(my_strrindex("Hello", 'z'));   my_str("\t|\tNot Found in String - \"\"\n");

  /*Testing my_strcat*/
  my_str("\nTesting my_strcat()\n----------------------------------------------\n");
  /*my_str(my_strcat(NULL,str));          my_str("\t|\tNULL\n");*/
  my_str(my_strcat(tester,NULL));       my_str("\t|concating Null: \"hello\"\n");
  my_str(my_strcat(tester,str));       my_str("\t|concating Null: \"helloOLLEH\"\n");

  /*Testing my_strcmp()  */
  my_str("\nTesting my_strcmp()\n----------------------------------------------\n");
  my_int(my_strcmp(NULL, "a"));      my_str("\t|\tNULL,a - \"-1\"\n");
  my_int(my_strcmp("a", NULL));      my_str("\t|\ta,NULL - \"1\"\n");
  my_int(my_strcmp("Hello", "Hello"));   my_str("\t|\tSameString: \"0\"\n");
  my_int(my_strcmp("Hello", "He"));   my_str("\t|\tEmpty String - \"1\"\n");
  my_int(my_strcmp("Hello", "e"));   my_str("\t|\tFound in String - \"-1\"\n");
  my_int(my_strcmp("Hello", "1234"));   my_str("\t|\tFound in String - \"1\"\n");
  my_int(my_strcmp("Hello", "Helloo"));   my_str("\t|\tNot Found in String - \"-1\"\n");

  /*Testing my_strncmp()  */
  my_str("\nTesting my_strncmp()\n----------------------------------------------\n");
  my_int(my_strncmp(NULL, "a", 10));      my_str("\t|\tNULL,a - \"-1\"\n");
  my_int(my_strncmp("a", NULL, 10));      my_str("\t|\ta,NULL - \"1\"\n");
  my_int(my_strncmp("Hello", "Hello", 10));   my_str("\t|\tSameString: \"0\"\n");
  my_int(my_strncmp("Hello", "He", 10));   my_str("\t|\tEmpty String - \"1\"\n");
  my_int(my_strncmp("Hello", "e", 10));   my_str("\t|\tFound in String - \"-1\"\n");
  my_int(my_strncmp("Hello", "1234", 10));   my_str("\t|\tFound in String - \"1\"\n");
  my_int(my_strncmp("Hello", "Helloo", 4));   my_str("\t|\tChecking first two chars, different after - \"0\"\n");

  /*Testing my_strconcat()  */
  my_str("\nTesting my_strconcat()\n----------------------------------------------\n");
  my_str(my_strconcat(NULL, "a"));      my_str("\t|\tNULL,a - \"a\"\n");
  my_str(my_strconcat("a", NULL));      my_str("\t|\ta,NULL - \"a\"\n");
  my_str(my_strconcat("Hello", "Hello"));   my_str("\t|\tSameString: \"HelloHello\"\n");
  my_str(my_strconcat("Hello", " World"));   my_str("\t|\t: \"Hello World\"\n");
  my_str(my_strconcat("Hello", "He"));   my_str("\t|\tEmpty String - \"HelloHe\"\n");
  my_str(my_strconcat("Hello", "e"));   my_str("\t|\tFound in String - \"Helloe\"\n");
  my_str(my_strconcat("e", "Hello"));   my_str("\t|\tFound in String - \"eHello\"\n");
  my_str(my_strconcat("e", "e"));   my_str("\t|\tFound in String - \"ee\"\n");
  my_str(my_strconcat("Hello", "1234"));   my_str("\t|\tFound in String - \"Hello1234\"\n");
  my_str(my_strconcat("Hello", "Helloo"));   my_str("\t|\tNot Found in String - \"HelloHelloo\"\n");

  /*Testing my_strnconcat()  */
  my_str("\nTesting my_strnconcat()\n----------------------------------------------\n");
  my_str(my_strnconcat(NULL, "a",1));      my_str("\t|\tNULL,a - \"a\"\n");
  my_str(my_strnconcat("a", NULL,1));      my_str("\t|\ta,NULL - \"a\"\n");
  my_str(my_strnconcat("Hello", "Hello", 10));   my_str("\t|\tSameString: \"HelloHello\"\n");
  my_str(my_strnconcat("Hello", "Hello", 2));   my_str("\t|\tSameString: \"HelloHe\"\n");
  my_str(my_strnconcat("Hello", " World", 10));   my_str("\t|\t: \"Hello World\"\n");
  my_str(my_strnconcat("Hello", "He", 10));   my_str("\t|\tEmpty String - \"HelloHe\"\n");
  my_str(my_strnconcat("Hello", "e", 10));   my_str("\t|\tFound in String - \"Helloe\"\n");
  my_str(my_strnconcat("e", "Hello", 10));   my_str("\t|\tFound in String - \"eHello\"\n");
  my_str(my_strnconcat("e", "e",10));   my_str("\t|\tFound in String - \"ee\"\n");
  my_str(my_strnconcat("Hello", "1234", 2));   my_str("\t|\tFound in String - \"Hello12\"\n");
  my_str(my_strnconcat("Hello", " Helloo", 5));   my_str("\t|\tNot Found in String - \"Hello Hell\"\n");

  /*Testing my_strcpy()  */
  my_str("\nTesting my_strcpy()\n----------------------------------------------\n");
  my_str(my_strcpy(NULL, "a"));      my_str("\t|\tNULL,a - \"a\"\n");
  my_str(my_strcpy("a", NULL));      my_str("\t|\ta,NULL - \"a\"\n");
  my_str(my_strcpy(tester2, "Hello\0"));   my_str("\t|\tSameString: \"Hello\"\n");
  my_str(my_strcpy(tester2, "olleH"));   my_str("\t|\t: \"ollehH\"\n");
  my_str(my_strcpy(tester2, "He"));   my_str("\t|\tEmpty String - \"He\"\n");

  /**my_str(my_strcpy("Hello", "e"));   my_str("\t|\tFound in String - \"Helloe\"\n");
  *my_str(my_strcpy("e", "Hello"));   my_str("\t|\tFound in String - \"eHello\"\n");
  *my_str(my_strcpy("e", "e"));   my_str("\t|\tFound in String - \"ee\"\n");
  *my_str(my_strcpy("Hello", "1234"));   my_str("\t|\tFound in String - \"Hello1234\"\n");
  *my_str(my_strcpy("Hello", "Helloo"));   my_str("\t|\tNot Found in String - \"HelloHelloo\"\n");
  **/

  /*Testing my_strdup()  */
  my_str("\nTesting my_strdup()\n----------------------------------------------\n");
  temp = my_strdup(NULL);
  my_str(temp);      my_str("\t|\tNULL - \"\"\n");
  temp = my_strdup("");
  my_str(temp);      my_str("\t|\t\"\" - \n");
  free(temp);
  temp = my_strdup(" ");
  my_str(temp);   my_str("\t|\t\" \" \" \"\n");
  free(temp);
  temp = my_strdup("a");
  my_str(temp);   my_str("\t|\t a \"a\"\n");
  free(temp);
  temp = my_strdup("abcde");
  my_str(temp);   my_str("\t|\t abcde \"abcde\"\n");
  free(temp);


  /*Testing my_str2vect()  */
    my_vect = my_str2vect(strvec);
    if(*my_vect != 0){
      my_str("not zero");
    }else{
      my_str("zero");
    }
    my_char('\n');
    while(*my_vect){
      my_str(*my_vect);
      my_char(',');
      my_vect++;
    }
  /*Testing my_vect2str()  */
  my_str("\nTesting my_vect2str()\n----------------------------------------------\n");
  my_str(my_vect2str(0));      my_str("\t|\t0 - \"\"\n");
  my_str(my_vect2str(vect));      my_str("\t|\tvect - \"vect\"\n");
  free(vect);
  vect = (char**) malloc(sizeof(char*) * 5);
  vect[0] = str;
  vect[1] = str;
  vect[2] = str;
  vect[3] = str;
  vect[4] = 0;
  my_str(my_vect2str(vect));      my_str("\t|\tvect - \"vect\"\n");
  free(vect);
  vect = (char**) malloc(sizeof(char*) * 2);
  vect[0] = str;
  vect[1] = 0;
  my_str(my_vect2str(vect));      my_str("\t|\tvect - \"vect\"\n");
  free(vect);

  /*Testing my_strncpy()  */
  my_str("\nTesting my_strncpy()\n----------------------------------------------\n");
  my_str(my_strncpy(NULL, "a", 1));      my_str("\t|\tNULL,a,1 - \"a\"\n");
  my_str(my_strncpy("a", NULL, 1));      my_str("\t|\ta,NULL - \"a\"\n");
  my_str(my_strncpy(tester2, "Hello\0", 5));   my_str("\t|\tSameString: \"Hello\"\n");
  my_str(my_strncpy(tester2, "olleH", 0));   my_str("\t|\t: \"ollehH 0\"\n");
  my_str(my_strncpy(tester2, "He", 20));   my_str("\t|\tHe, 20 - \"He\"\n");


  /*Testing my_atoi()  */
  my_str("\nTesting my_atoi()\n----------------------------------------------\n");
  my_int(my_atoi(NULL));      my_str("\t|\tNULL - \"0\"\n");
  my_int(my_atoi("0"));      my_str("\t|\t\"0\" - 0\n");
  my_int(my_atoi("1"));   my_str("\t|\t\"1\" - 1\n");
  my_int(my_atoi("10"));   my_str("\t|\t\"10\" - 10\n");
  my_int(my_atoi("11"));   my_str("\t|\t\"11\" - 11\n");
  my_int(my_atoi("2147483647"));   my_str("\t|\t\"2147483647\" - 2147483647\n");
  my_int(my_atoi("a1"));      my_str("\t|\t\"a1\" - 1\n");
  my_int(my_atoi("-1"));      my_str("\t|\t\"-1\" - -1\n");
  my_int(my_atoi("5555"));   my_str("\t|\t\"5555\" - 5555\n");
  my_int(my_atoi("---1000"));   my_str("\t|\t\"---1000\" - -1000\n");
  my_int(my_atoi("a---1000"));   my_str("\t|\t\"a---1000\" - -1000\n");
  my_int(my_atoi("abc---1000"));   my_str("\t|\t\"abc---1000\" - -1000\n");
  my_int(my_atoi("---1000"));   my_str("\t|\t\"---1000\" - -1000\n");
  my_int(my_atoi("ABCD---10000--asd34123"));   my_str("\t|\t\"ABCD---10000--asd34123\" - -10000\n");
  my_int(my_atoi("ABCD-asdf--10000--asd34123"));   my_str("\t|\t\"ABCD-asdf--10000--asd34123\" - -10000\n");
  my_int(my_atoi("ABCD-asdf-asdf-10000--asd34123"));   my_str("\t|\t\"ABCD-asdf-asdf-10000--asd34123\" - -10000\n");
  my_int(my_atoi("ABCD-asdf-asdf-asdf10000--asd34123"));   my_str("\t|\t\"ABCD-asdf-asdf-asdf10000--asd34123\" - -10000\n");
  my_int(my_atoi("-2147483648"));   my_str("\t|\t\"-2147483648\" - -2147483648\n");
  my_int(my_atoi("-2147483649"));   my_str("\t|\t\"-2147483649\" - -2147483649\n");
  my_int(my_atoi("2147483647"));   my_str("\t|\t\"2147483647\" - 2147483647\n");

  return 0;
}
