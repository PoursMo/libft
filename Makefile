CC = gcc
FLAGS = -Wextra -Wall -Werror
SOURCES =	ft_atoi.c			\
			ft_bzero.c			\
			ft_calloc.c			\
			ft_conv_to_base.c	\
			ft_putnbr_base.c	\
			ft_isalnum.c		\
			ft_isalpha.c		\
			ft_isascii.c		\
			ft_isblank.c		\
			ft_isdigit.c		\
			ft_islower.c		\
			ft_isprint.c		\
			ft_isspace.c		\
			ft_isupper.c		\
			ft_itoa.c			\
			ft_memchr.c			\
			ft_memcmp.c			\
			ft_memcpy.c			\
			ft_memmove.c		\
			ft_mempcpy.c		\
			ft_memset.c			\
			ft_putchar.c		\
			ft_putnbr.c			\
			ft_putstr.c			\
			ft_split.c			\
			ft_stpcpy.c			\
			ft_strcat.c			\
			ft_strchr.c			\
			ft_strcmp.c			\
			ft_strcpy.c			\
			ft_strdup.c			\
			ft_strjoin.c		\
			ft_strlcpy.c		\
			ft_strlcat.c		\
			ft_strlen.c			\
			ft_strncmp.c		\
			ft_strndup.c		\
			ft_strnlen.c		\
			ft_strrchr.c		\
			ft_strrev.c			\
			ft_strstr.c			\
			ft_tolower.c		\
			ft_toupper.c		\
			ft_lstnew.c			\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		\
			# ft_lstmap.c			
OBJS = $(SOURCES:.c=.o)
NAME = libft.a
RM = rm -f

all: $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c $^

$(NAME): $(OBJS)
	@ar rcs $@ $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	@$(CC) $(FLAGS) tester.c -L. -lft -o test
	@./test
	@$(RM) test