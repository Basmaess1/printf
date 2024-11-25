#variables

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_printf.c ft_addr.c ft_hexlow.c ft_hexupp.c ft_int.c \
		  ft_putchar.c ft_putstr.c ft_unsig.c

OBJECTS = $(SOURCES:.c=.o)

#rules
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

#clean

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re