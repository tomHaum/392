NAME = libmylist.a
TARBALL = thaumers-$(NAME).tar.gz
SRC = 	add_elem.c add_node.c append.c new_node.c print_int.c traverse_int.c \
		add_node_at.c count_s_nodes.c debug_char.c debug_int.c \
		debug_string.c elem_at.c empty_list.c node_at.c \
		print_char.c print_string.c remove_last.c remove_node_at.c \
		remove_node.c traverse_char.c traverse_string.c

OBJ = $(SRC:.c=.o)

CFLAGS = -I../../include -Wall -pedantic -g
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
