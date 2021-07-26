#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H

# include "libft/libft.h"

typedef struct	s_param
{
	int*	a;
	int*	b;
	int	stopa;
	int	stopb;
}				t_param;

int	main(int ac, char **av);
int	ft_errors(char **av, t_param *param, int ac);
void	ft_sa(t_param *param);
void	ft_sb(t_param *param);
void	ft_ss(t_param *param);
void	ft_pa(t_param *param);
void	ft_pb(t_param *param);
void	ft_ra(t_param *param);
void	ft_rb(t_param *param);
void	ft_rr(t_param *param);
void	ft_rra(t_param *param);
void	ft_rrb(t_param *param);
void	ft_rrr(t_param *param);

#endif
