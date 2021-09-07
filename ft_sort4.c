/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:12:42 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:13:10 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sort4c(t_param *param, int *smallerpos)
{
	if (*smallerpos == 0)
	{
		ft_rra(param, 0);
		ft_pb(param);
		ft_sort3(param);
		ft_pa(param);
	}
}

void	ft_sort4b(t_param *param, int *smallerpos)
{
	if (*smallerpos == 3)
	{
		ft_pb(param);
		ft_sort3(param);
		ft_pa(param);
	}
	if (*smallerpos == 2)
	{
		ft_sa(param, 0);
		ft_pb(param);
		ft_sort3(param);
		ft_pa(param);
	}
	if (*smallerpos == 1)
	{
		ft_rra(param, 0);
		ft_rra(param, 0);
		ft_pb(param);
		ft_sort3(param);
		ft_pa(param);
	}
	ft_sort4c(param, smallerpos);
}

void	ft_sort4(t_param *param)
{
	int	i;
	int	smallerpos;
	int	smaller;

	i = 0;
	smallerpos = 0;
	smaller = param->a[i];
	while (i < param->stopa)
	{
		if (param->a[i] < smaller)
		{
			smallerpos = i;
			smaller = param->a[i];
		}	
		i++;
	}
	ft_sort4b(param, &smallerpos);
}
