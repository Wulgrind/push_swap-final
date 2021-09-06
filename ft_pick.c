#include "ft_pushswap.h"

int	ft_inorder(t_param *param)
{
	int	i;

	i = 0;
	while (i < param->stopa -1)
	{
		if (param->a[i + 1] > param->a[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_pick(t_param *param)
{
	if (ft_inorder(param))
		return (1);
	else if (param->stopa <= 6)
		ft_small(param);
	else if (param->stopa > 6)
		ft_big(param);
	return (1);
}
