#include "ft_pushswap.h"

void	ft_rrb(t_param *param, int sw)
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
	if (sw == 0)
		ft_putstr("rrb");
	if (!ft_inorder(param) || param->stopb > 0)
		ft_putstr("\n");
}
