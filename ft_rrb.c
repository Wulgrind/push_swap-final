#include "ft_pushswap.h"

void	ft_rrb(t_param *param)
{
	int	temp;
	int	i;

	i = 0;
	temp = param->b[i];
	while (i < param->stopb - 1)
	{
		param->b[i] = param->b[i + 1];
		i++;
	}
	param->b[i] = temp;
}
