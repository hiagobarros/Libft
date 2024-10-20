NAME= libft.a
CC= cc
CFLAGS= -Wall -Wextra -Werror
AR= ar rc
RM= rm -rf
SRCS= ft_isalpha.c\
      ft_isdigit.c\
      ft_isalnum.c\
      ft_isascii.c\
      ft_isprint.c\
      ft_strlen.c\
      ft_memset.c\
      ft_bzero.c\
      ft_memcpy.c\
      ft_memmove.c\
      ft_strlcpy.c\
      ft_strlcat.c\
      ft_toupper.c\
      ft_tolower.c
OBJS=$(SRCS:.c=.o)


all:$(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c -I . $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all