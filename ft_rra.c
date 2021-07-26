#include "ft_pushswap.h"

void	ft_rra(t_param *param)
{
	int	temp;
	int	i;

	i = 0;
	temp = param->a[i];
	while (i < param->stopa - 1)
	{
		param->a[i] = param->a[i + 1];
		i++;
	}
	param->a[i] = temp;
}
