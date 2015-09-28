#ifndef MY_BASICS
#define MY_BASICS

void my_char(char c);

void my_str(char *str);

void my_int(int);

void my_num_base(int, char*);

void my_alpha();

void my_digits();

int my_find(char*, char);

int my_rfind(char*, char);

char *my_strindex(char*, char);

char *my_strrindex(char*, char);

int my_strlen(char*);

int my_revstr(char*);

char *my_strcat(char *, char *);

int my_strcmp(char *, char *);

int my_strncmp(char *, char *, int);

char *my_strconcat(char *, char *);

char *my_strnconcat(char *, char *, int);

char *my_strcpy(char *, char *);

char *my_strncpy(char *, char *, int);

char* copy_to_ws(char* str);

int count_whitespace(char* str);

int is_digit(char c);

int is_numeric(char c);

int my_atoi(char* str);

char **my_str2vect(char* str);

char* my_vect2str(char** x);

char* my_strdup(char* str);

#endif
