NAME = libmy.a
TARBALL = thaumers-$(NAME).tar.gz
SRC =  	my_alpha.c my_char.c my_digits.c my_int.c my_num_base.c my_revstr.c my_str.c my_strindex.c \
		my_strrindex.c my_strlen.c my_find.c my_rfind.c my_strcat.c my_strcmp.c my_strncmp.c \
		my_strconcat.c my_strnconcat.c my_strcpy.c\
		copy_to_ws.c count_whitespace.c is_digit.c is_numeric.c my_atoi.c my_str2vec.c\
		my_strncpy.c my_strdup.c my_vect2str.c

OBJ = $(SRC:.c=.o)



CFLAGS = -I../../include -Wall -pedantic
LDFLAGS = -c 

all: $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)
	mv $(NAME) ../../lib
	cd ../../test && make
	
	

clean:
	rm -f $(OBJ)
	rm -f $(SRC:.c=.o)
	rm -f *~
	cd ../../test && make clean
	

fclean: clean
	rm -f ../../lib/$(NAME)

re: fclean all
