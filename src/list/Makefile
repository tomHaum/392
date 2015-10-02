NAME = libmylist.a
TARBALL = thaumers-$(NAME).tar.gz
SRC = 	add_elem.c add_node.c append.c new_node.c print_int.c traverse_int.c add_node_at.c

OBJ = $(SRC:.c=.o)

CFLAGS = -I../../include -Wall -Werror -pedantic -g
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
