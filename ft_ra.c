#include "ft_pushswap.h"

void	ft_ra(t_param *param, int sw)
{
	int	temp;
	int	i;

	i = param->stopa - 1;
	temp = param->a[i];
	while (i > 0)
	{
		param->a[i] = param->a[i - 1];
		i--;
	}
	param->a[i] = temp;
	if (sw == 0)
		ft_putstr("ra");
	if (!ft_inorder(param) || param->stopb > 0)
	{
		ft_putstr("\n");
	}
}
