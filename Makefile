.RECIPEPREFIX = ~
CC = cc
SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_u.c ft_puthex.c ft_putadd.c ft_printf.c
B_SRC = ft_additional_flags_bonus.c
B_OBJ = $(B_SRC:.c=.o)
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ} ${B_OBJ}
~@ar rcs $@ $^

bonus : ${OBJ} ${B_OBJ}
~@ar rcs ${NAME} $^

clean:
~rm -f ${OBJ} ${B_OBJ}

fclean: clean
~rm -f ${NAME}

re: fclean all

testing: 
~git clone git@github.com:sarahgh8/ft_printf_test.git printf_test_by_sarah
~${CC} printf_test_by_sarah/test.c ${SRC} ${B_SRC} -o test
~./test

tclean:
~rm -rf printf_test_by_sarah test

tre: tclean testing

.PHONY: all clean fclean re bonus testing tclean