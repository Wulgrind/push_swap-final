#include "ft_pushswap.h"

void	ft_sa(t_param *param)
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
}
