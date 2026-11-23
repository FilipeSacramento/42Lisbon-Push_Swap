

NAME	= ft_pushswap.a
CC		= cc
FLAGS	= -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -f

SRCS	=	parse.c \
			isnum.c \
			isflag.c \
			atoi_list.c \


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re