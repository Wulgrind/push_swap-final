#include "ft_pushswap.h"

void	ft_sb(t_param *param)
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
}
