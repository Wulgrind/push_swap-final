#include "ft_pushswap.h"

void	ft_rb(t_param *param, int sw)
{
	int	temp;
	int	i;

	i = param->stopb - 1;
	temp = param->b[i];
	while (i > 0)
	{
		param->b[i] = param->b[i - 1];
		i--;
	}
	param->b[i] = temp;
	if (sw == 0)
		ft_putstr("rb");
	if (!ft_inorder(param) || param->stopb > 0)
		ft_putstr("\n");
}
