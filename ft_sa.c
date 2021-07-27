#include "ft_pushswap.h"

void	ft_sa(t_param *param, int sw)
{
	int	i;
	int	temp;

	i = param->stopa - 1;
	if (i >= 1)
	{
		temp = param->a[i];
		param->a[i] = param->a[i - 1];
		param->a[i - 1] = temp;
	}
	if (sw == 0)
		ft_putstr("sa\n");
}
