#include "ft_pushswap.h"

void	ft_pb(t_param *param)
{
	int	i;
	int	j;

	i = param->stopa - 1;
	j = param->stopb;
	if (param->stopa > 0)
	{
		param->b[j] = param->a[i];
		param->stopa--;
		param->stopb++;
	}
	ft_putstr("pb\n");
}
