#include "ft_pushswap.h"

void	ft_rrr(t_param *param)
{
	ft_rra(param, 1);
	ft_rrb(param, 1);
	ft_putstr("rrr");
	if (!ft_inorder(param) || param->stopb > 0)
		ft_putstr("\n");
}
