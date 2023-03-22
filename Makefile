CC	=	gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rcs
NAME = libftprintf.a

SRCS_LST	=	ft_printf.c	\
				ft_putnum.c	\
				ft_output.c

SRCS_OBJS = $(SRCS_LST:.c=.o)

$(NAME): $(SRCS_OBJS)
		make -C libft
		cp libft/libft.a ./
		mv libft.a $(NAME)
		$(AR) $(NAME) $(SRCS_OBJS)

all:	$(NAME)

clean:	
		$(RM) $(SRCS_OBJS)
		make clean -C libft

fclean:	clean
		$(RM) $(SRCS_OBJS)
		$(RM) libft/libft.a

re:		fclean $(NAME)

.PHONY: all clean fclean re
