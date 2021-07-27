#include "ft_pushswap.h"

void	ft_sort2(t_param *param)
{
	if (param->a[0] < param->a[1])
	{
		ft_sa(param, 0);
	}
}

void	ft_sort3b(t_param *param)
{
	if (param->a[2] < param->a[1] && param->a[2] < param->a[0] && param->a[1] > param->a[0])
	{
		ft_sa(param, 0);
		ft_ra(param, 0);
	}
	if (param->a[2] < param->a[1] && param->a[0] < param->a[1] && param->a[0] < param->a[2])
	{
		ft_rra(param, 0);
	}
}

void	ft_sort3(t_param *param)
{
	if (param->a[2] > param->a[1] && param->a[1] < param->a[0] && param->a[2] < param->a[0])
	{
			ft_sa(param, 0);
	}
	if (param->a[0] < param->a[1] && param->a[1] < param->a[2])
	{
		ft_sa(param, 0);
		ft_rra(param, 0);
	}
	if (param->a[2] > param->a[0] && param->a[1] < param->a[0])
	{
		ft_ra(param, 0);
	}
	ft_sort3b(param);
}

void	ft_small(int ac, t_param *param)
{
	if (ac == 3)
		ft_sort2(param);
	if (ac == 4)
		ft_sort3(param);
	if (ac >= 5)
		ft_sort4(param);
}
