/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:28:55 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:28:56 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_rra(t_param *param, int sw)
{
	int	temp;
	int	i;

	i = 0;
	temp = param->a[i];
	while (i < param->stopa - 1)
	{
		param->a[i] = param->a[i + 1];
		i++;
	}
	param->a[i] = temp;
	if (sw == 0)
		ft_putstr("rra");
	ft_putstr("\n");
}
