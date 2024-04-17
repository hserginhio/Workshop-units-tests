##
## EPITECH PROJECT, 2024
## Workshop_Unit_Tests
## File description:
## Makefile
##

NAME	=	my_str_to_word_array

CC	=	gcc

RM	=	rm -f

TEST_NAME = unit_tests

CFLAGS	=	-W -Wall -Wextra -Werror -I./includes

SRC_MAIN	=	src/src_main/main.c

SRC	=	$(shell find src/ -name '*.c' -not -name 'main.c')

SRC_TESTS = $(shell find tests/ -name '*.c')

OBJ	=	$(SRC:.c=.o)

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJ_MAIN)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(CFLAGS)

clean:
	$(RM) $(OBJ) $(OBJ_MAIN)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

tests_run:
	gcc -o $(TEST_NAME) $(SRC_TESTS) $(SRC) --coverage -lcriterion $(CFLAGS)
	./unit_tests && gcovr --exclude tests/ && gcovr --branches --exclude tests/

tests_clean: 
	rm -f *.gcno
	rm -f *.gcda

tests_fclean: tests_clean
	rm -rf $(TEST_NAME) 

tests_re: tests_fclean tests_run

.PHONY:	all clean fclean re
