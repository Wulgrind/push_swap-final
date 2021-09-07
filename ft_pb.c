/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:12:02 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:12:03 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_pb(t_param *param)
{
	int	i;
	int	j;

	i = param->stopa - 1;
	j = param->stopb;
	if (param->stopa > 0)
	{
		param->b[j] = param->a[i];
		param->stopa--;
		param->stopb++;
	}
	ft_putstr("pb");
	ft_putstr("\n");
}
