#include "ft_pushswap.h"

void	ft_rr(t_param *param)
{
	ft_ra(param, 1);
	ft_rb(param, 1);
	ft_putstr("rr");
	if (!ft_inorder(param) || param->stopb > 0)
		ft_putstr("\n");
}
