NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c\
ft_isascii.c	ft_isprint.c	ft_strlen.c		ft_strlcat.c\
ft_strlcpy.c 	ft_strncmp.c	ft_strchr.c		ft_strrchr.c\
ft_strnstr.c	ft_bzero.c		ft_memset.c		ft_memcpy.c\
ft_memmove.c 	ft_memchr.c 	ft_memcmp.c		ft_toupper.c\
ft_tolower.c	ft_calloc.c 	ft_strdup.c 	ft_atoi.c\
ft_strjoin.c	ft_itoa.c		ft_putendl_fd.c	ft_putstr_fd.c\
ft_putchar_fd.c

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