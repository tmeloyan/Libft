NAME = libft.a

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c \
		ft_memchr.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_strdup.c ft_calloc.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_strmapi.c ft_putnbr_fd.c ft_putendl_fd.c ft_striteri.c \
		ft_itoa.c ft_split.c
SRCBON = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c  \
		 ft_lstiteri.c ft_lstlast.c ft_lstsize.c ft_lstdelone.c \
		 ft_lstiteri.c ft_lstclear.c ft_lstmap.c 

OBJS = $(SRCS:.c=.o)
BONUS = $(SRCBON:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) *.o
	ranlib $(NAME)

bonus: $(BONUS)
	ar rc $(NAME) *.o
	ranlib $(NAME)

%.c:%.o
	cc $(CFLAGS) -c $< -o $@

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all
