#include "ft_pushswap.h"

void	ft_sort5c(t_param *param)
{
	
}

void	ft_sort5bb(t_param *param)
{
	if (param->b[0] > param->a[0])
	{
		ft_rra(param, 0);
		ft_pa(param);
		ft_ra(param, 0);
		ft_ra(param, 0);
		ft_pa(param);
		ft_ra(param, 0);
	}
}

void	ft_sort5b(t_param *param)
{
	if (param->b[1] < param->a[1])
	{
		ft_pa(param);
		ft_sa(param, 0);
	}
	if (param->b[1] > param->a[1] && param->b[1] < param->a[0])
	{
		if (param->b[0] < param->a[0])
		{
			ft_rra(param, 0);
			ft_pa(param);
			ft_pa(param);
			ft_sa(param, 0);
			ft_ra(param, 0);
			ft_ra(param, 0);
			ft_ra(param, 0);
		}
		ft_sort5bb(param);
	}
	ft_sort5c(param);
}

void	ft_sort5(t_param *param)
{
	ft_pb(param);
	ft_pb(param);
	ft_sort3(param);
	if (param->b[1] > param->b[0])
		sb(param, 0);
	else if (param->b[1] < param->a[2])
		ft_pa(param);
	else if (param->b[1] > param->a[0])
	{
		ft_pa(param);
		ft_ra(param, 0);	
	ft_sort5b(param);
}
