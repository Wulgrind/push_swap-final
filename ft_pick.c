#include "ft_pushswap.h"

int	ft_inorder(t_param *param)
{
	int	i;

	i = 0;
	while (i < param->stopa)
	{
		if (param->a[i + 1] > param->a[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_pick(int ac, t_param *param)
{
	if (ft_inorder(param))
		return (1);
	if (ac <= 6)
		ft_small(ac, param);
	return (1);
}
