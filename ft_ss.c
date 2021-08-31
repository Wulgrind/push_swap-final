#include "ft_pushswap.h"

void	ft_ss(t_param *param)
{
	ft_sa(param, 1);
	ft_sb(param, 1);
	ft_putstr("ss");
	if (!ft_inorder(param) || param->stopb > 0)
		ft_putstr("\n");
}
