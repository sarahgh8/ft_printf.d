CC = cc
SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_u.c ft_puthex.c ft_putadd.c ft_printf.c
B_SRC = ft_hashtag_bonus.c ft_space_bonus.c

B_OBJ = $(B_SRC:.c=.o)
OBJ = $(SRC:.c=.o)

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror


all: ${NAME}

${NAME}: ${OBJ} ${B_OBJ}
	@ar rcs ${NAME} $^

bonus : ${OBJ} ${B_OBJ}
	@ar rcs ${NAME} $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f ${OBJ} ${B_OBJ}

fclean: clean
	rm -f ${NAME} ${LIBFT}

re: fclean all

.PHONY: all clean fclean re bonus