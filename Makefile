NAME = libft.a

SRC = ft_isalpha.c ft_isalnum.c ft_isdigit.c\
ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c\
ft_bzero.c ft_memcpy.c ft_memmove.c ft_strcmp.c\
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\


OBJS = $(SRC:.c=.o)

INC = $(NAME:.a=.h)

WFLAGS = -Wall -Werror -Wextra

.PHONY: all
all: $(NAME)

$(OBJS): $(SRC)
	gcc $(WFLAGS) $(SRC) -g -c

$(NAME): $(OBJS)
	ar -rc $@ $(OBJS)
	ranlib $@

.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all