
NAME = libft.a

CFLAGS = -Wall -Werror -Wextra -I.

SRC = ft_lstnew.c \
ft_lstmap.c \
ft_lstiter.c \
ft_lstadd.c \
ft_lstdel.c \
ft_lstdelone.c \
ft_putnbr.c \
ft_putnbr_fd.c \
ft_putchar.c \
ft_putchar_fd.c \
ft_putstr.c \
ft_putstr_fd.c \
ft_putendl.c \
ft_putendl_fd.c \
ft_striter.c \
ft_striteri.c \
ft_strclr.c \
ft_strdel.c \
ft_memdel.c \
ft_bzero.c \
ft_memalloc.c \
ft_memset.c \
ft_memmove.c \
ft_memcpy.c \
ft_memccpy.c \
ft_memchr.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_tolower.c \
ft_toupper.c \
ft_atoi.c \
ft_get_next_line.c \
ft_memcmp.c \
ft_strncmp.c \
ft_strcmp.c \
ft_strequ.c \
ft_strnequ.c \
ft_strlen.c \
ft_strlcat.c \
ft_strnew.c \
ft_strdup.c \
ft_strmap.c \
ft_strmapi.c \
ft_strncat.c \
ft_strcat.c \
ft_strcpy.c \
ft_strncpy.c \
ft_strstr.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strchr.c \
ft_strsub.c \
ft_strjoin.c \
ft_strtrim.c \
ft_strsplit.c \
ft_strlowcase.c \
ft_strupcase.c \
ft_itoa_base.c \
ft_itoa.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re