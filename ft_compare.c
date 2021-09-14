/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:07:18 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/14 11:52:34 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_empty(t_param *param)
{
	while (param->stopb > 0)
	{
		ft_pa(param);
	}
}

void	ft_compare2(t_param *param)
{
	param->nb = param->a[param->stopa - 1];
	if (((param->nb >> param->i) & 1) == 1)
		ft_ra(param, 0);
	else
		ft_pb(param);
}

void	ft_compare(t_param *param)
{
	while ((param->big >> param->bigbit) != 0)
		param->bigbit++;
	while (param->i < param->bigbit)
	{
		param->j = 0;
		while (param->j < param->max)
		{
			ft_compare2(param);
			param->j++;
		}
		ft_empty(param);
		param->i++;
	}
}
