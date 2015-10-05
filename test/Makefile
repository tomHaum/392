NAME = testmy

SRC = test.c
TEST = tect.c
TESTO = $(TEST:.c=.o)
OBJ = $(SRC:.c=.o)

CFLAGS = -I../include -Wall -g
LDFLAGS = 

test: $(OBJ)
	gcc -L../lib test.c -o $(NAME) -lmy -lmylist
	gcc -L../lib testlist.c -o testlist -lmy -lmylist
	
clean:
	rm -f $(OBJ)
	rm -f $(NAME)