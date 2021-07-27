#include "ft_pushswap.h"

void	ft_pa(t_param *param)
{
	int	i;
	int	j;

	i = param->stopb - 1;
	j = param->stopa;
	if (param->stopb > 0)
	{
		param->a[j] = param->b[i];
		param->stopb--;
		param->stopa++;
	}
		ft_putstr("pa\n");
}
