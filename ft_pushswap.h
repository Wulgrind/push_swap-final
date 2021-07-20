#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H

# include "libft/libft.h"

typedef struct	s_param
{
	int* a;
}				t_param;

int	main(int ac, char **av);
int	ft_errors(char **av, t_param *param, int ac);

#endif
