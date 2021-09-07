/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:23:49 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:24:11 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sortb(t_param *param)
{
	int	i;
	int	j;

	i = 0;
	while (i < param->stopa)
	{
		j = 0;
		while (j < param->stopa)
		{
			if (param->a[i] == param->c[j])
			{
				param->a[i] = j;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort(t_param *param)
{
	int	i;
	int	temp;	

	i = 0;
	while (i < param->stopa)
	{
		param->c[i] = param->a[i];
		i++;
	}
	i = 0;
	while (i < param->stopa - 1)
	{
		if (param->c[i] > param->c[i + 1])
		{
			temp = param->c[i + 1];
			param->c[i + 1] = param->c[i];
			param->c[i] = temp;
			i = -1;
		}
		i++;
	}
	ft_sortb(param);
}

void	ft_big(t_param *param)
{
	ft_sort(param);
	ft_compare(param);
}
