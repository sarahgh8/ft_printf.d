CC = cc
SRC = ft_putchr.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_putnbr_u.c \
	ft_puthex.c \
	ft_putadd.c \
	ft_printf.c \

OBJ = $(SRC:.c=.o)
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror -I.

all: ${NAME}

${NAME} : ${OBJ}
	ar rcs ${NAME} ${OBJ}



%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re