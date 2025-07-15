NAME = libft.a

SRC = ft_isalpha.c ft_isalnum.c ft_isdigit.c

OBJS = $(SRC:.c=.o)

INC = $(NAME:.a=.h)

WFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(OBJS): $(SRC)
	gcc $(WFLAGS) $(SRC) -c

$(NAME): $(OBJS)
	ar -rc $@ $(OBJS)
	ranlib $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re