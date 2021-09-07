/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pick.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:21:43 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:22:05 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int	ft_inorder(t_param *param)
{
	int	i;

	i = 0;
	while (i < param->stopa - 1)
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
