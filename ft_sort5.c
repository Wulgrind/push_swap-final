/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:22:50 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:23:30 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sort5d(t_param *param)
{
	if (param->smallpos == 3)
		ft_pb(param);
	if (param->smallpos == 2)
	{
		ft_sa(param, 0);
		ft_pb(param);
	}
	if (param->smallpos == 1)
	{
		ft_rra(param, 0);
		ft_rra(param, 0);
		ft_pb(param);
	}
	if (param->smallpos == 0)
	{
		ft_rra(param, 0);
		ft_pb(param);
	}
	ft_sort3(param);
	ft_pa(param);
	ft_pa(param);
}

void	ft_sort5c(t_param *param)
{
	int	i;

	i = 0;
	if (param->smallpos == 1)
	{
		ft_rra(param, 0);
		ft_rra(param, 0);
		ft_pb(param);
	}
	param->smallpos = 0;
	param->small = param->a[i];
	while (i < param->stopa)
	{
		if (param->a[i] < param->small)
		{
			param->small = param->a[i];
			param->smallpos = i;
		}
		i++;
	}
	ft_sort5d(param);
}

void	ft_sort5b(t_param *param)
{
	if (param->smallpos == 0)
	{
		ft_rra(param, 0);
		ft_pb(param);
	}
	if (param->smallpos == 3)
	{
		ft_sa(param, 0);
		ft_pb(param);
	}
	if (param->smallpos == 2)
	{
		ft_ra(param, 0);
		ft_sa(param, 0);
		ft_pb(param);
	}
	ft_sort5c(param);
}

void	ft_sort5(t_param *param)
{
	int	i;

	i = 0;
	param->small = param->a[i];
	param->smallpos = i;
	while (i < param->stopa)
	{
		if (param->a[i] < param->small)
		{
			param->small = param->a[i];
			param->smallpos = i;
		}
		i++;
	}
	if (param->smallpos == 4)
		ft_pb(param);
	ft_sort5b(param);
}
