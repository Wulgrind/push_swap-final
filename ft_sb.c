#include "ft_pushswap.h"

void	ft_sb(t_param *param, int sw)
{
	int	i;
	int	temp;

	i = param->stopb - 1;
	if (i >= 1)
	{
		temp = param->b[i];
		param->b[i] = param->b[i - 1];
		param->b[i - 1] = temp;
	}
	if (sw == 0)
		ft_putstr("sb\n");
}
