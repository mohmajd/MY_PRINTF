src = 	ft_lowerhex.c ft_printf.c ft_putadress.c ft_putchar.c \
		ft_putnbr.c ft_putparcent.c ft_putstr.c ft_upperhex.c \
		ft_putunbr.c

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
OBJS = $(src:.c=.o)
CC = cc
AR = ar -rc

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c printf.h
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re