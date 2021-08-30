#Compilation

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
INC = -I.
LIB = ft_pushswap.h

#VALUES

NAME	= push_swap

#SOURCES

LIB =-L./libft

FILES	=	ft_pa.c		\
		ft_rb.c		\
		ft_sb.c		\
		main.c		\
		ft_pb.c		\
		ft_rr.c		\
		ft_small.c	\
		ft_big.c	\
		ft_pick.c	\
		ft_rra.c	\
		ft_sort4.c	\
		ft_compare.c	\
		ft_rrb.c	\
		ft_sort5.c	\
		ft_errors.c	\
		ft_rrr.c	\
		ft_ss.c		\
		ft_init.c	\
		ft_ra.c		\
		ft_sa.c		
		

OBJS	= ${FILES:.c=.o}

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):	$(OBJS)
		make -C ./libft
			 $(CC)  $(LIB) ./libft/libft.a  $(OBJS) $(CFLAGS) -o $(NAME)

all:	$(NAME)

clean:
		make $@ -C libft
		rm -f $(OBJS)

fclean: clean
				make $@ -C libft
				rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
