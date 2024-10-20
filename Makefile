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
      ft_tolower.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strncmp.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_atoi.c\
	  ft_calloc.c\
	  ft_strdup.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c

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



linker: $(NAME)
	$(CC) $(CFLAGS) $(NAME) main.c

run: linker
	./a.out
  