CC = cc
SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_u.c ft_puthex.c ft_putadd.c ft_printf.c
B_SRC = ft_hashtag_bonus.c ft_space_bonus.c

B_OBJ = $(B_SRC:.c=.o)
OBJ = $(SRC:.c=.o)

NAME = libftprintf.a
LIBFT = libft.a
LIBFT_DIR = Libft/
CFLAGS = -Wall -Wextra -Werror


all: ${NAME}


${NAME}: ${OBJ} ${B_OBJ}
	@make -C ${LIBFT_DIR}
	@cp ${LIBFT_DIR}${LIBFT} .
	@mv ${LIBFT} ${NAME}
	@ar rcs $@ $<

bonus : ${OBJ} ${B_OBJ}
	@make -C ${LIBFT_DIR}
	@cp ${LIBFT_DIR}${LIBFT} .
	@mv ${LIBFT} ${NAME}
	@ar rcs ${NAME} $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make clean -C ${LIBFT_DIR}
	rm -f ${OBJ} ${B_OBJ}

fclean: clean
	@make fclean -C ${LIBFT_DIR}
	rm -f ${NAME} ${LIBFT}

re: fclean all

.PHONY: all clean fclean re bonus