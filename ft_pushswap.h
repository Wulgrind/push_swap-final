#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H

# include "libft/libft.h"

typedef struct	s_param
{
	int*	a;
	int*	b;
	int*	c;
	int	stopa;
	int	stopb;
	int	small;
	int	smallpos;
}		t_param;

int	main(int ac, char **av);
int	ft_errors(char **av, t_param *param, int ac);
void	ft_sa(t_param *param, int sw);
void	ft_sb(t_param *param, int sw);
void	ft_ss(t_param *param);
void	ft_pa(t_param *param);
void	ft_pb(t_param *param);
void	ft_ra(t_param *param, int sw);
void	ft_rb(t_param *param, int sw);
void	ft_rr(t_param *param);
void	ft_rra(t_param *param, int sw);
void	ft_rrb(t_param *param, int sw);
void	ft_rrr(t_param *param);
int	ft_pick(int ac, t_param *param);
void	ft_small(int ac, t_param *param);
void	ft_sort4(t_param *param);
void	ft_sort3(t_param *param);
void	ft_sort5(t_param *param);
int	ft_init(int ac, t_param *param);
void	ft_big(t_param *param);

#endif
