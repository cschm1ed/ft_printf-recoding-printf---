SRCS = ft_printf.c print_decimal.c print_hexpointer.c print_itohex_lower.c \
		print_itohex_upper.c print_string.c print_unsignedi.c \
		print_char.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

VPATH = ./srcs

NAME = libftprintf.a

MAKE = make

$(NAME): $(OBJS)
	$(MAKE) libft.a -s
	mv libft/libft.a ./$(NAME)
	@ar rcs $(NAME) $(OBJS)

libft.a:
	$(MAKE) all -C libft

clean:
	$(MAKE) clean -C libft -s
	@rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C libft -s
	rm -f $(NAME)

all:
	$(MAKE) $(NAME)

re: fclean
	$(MAKE) all

.PHONY: clean fclean all re test libft.a
