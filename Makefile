NAME = minishell
CC = clang
LIBFT_DIR = ./libft
PRINTF_DIR = ./ft_printf
SRCS = src/*.c
FLAGS = #-Wall -Wextra -Werror
HEADERS = 
INCLUDES = libft/libft.a ft_printf/libftprintf.a

OBJS = ${SRCS:.c=.o}

all: libft ft_printf $(SRC)
	$(CC) -g $(SRCS) -o $(NAME) $(INCLUDES)

libft:
	@make -C $(LIBFT_DIR)

ft_printf:
	@make -C $(PRINTF_DIR)

clean:
	@rm -f *.o
	@make -C $(LIBFT_DIR) clean
	@make -C $(PRINTF_DIR) clean

fclean: clean
	@rm -f push_swap
	@make -C $(LIB_DIR) fclean
	@make -C $(PRINTF_DIR) fclean

re: fclean all
	
%.o: %.c
	$(CC) $<  -c

.PHONY: all libft clean fclean re ft_printf