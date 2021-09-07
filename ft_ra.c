/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:07:49 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:08:23 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_ra(t_param *param, int sw)
{
	int	temp;
	int	i;

	i = param->stopa - 1;
	temp = param->a[i];
	while (i > 0)
	{
		param->a[i] = param->a[i - 1];
		i--;
	}
	param->a[i] = temp;
	if (sw == 0)
		ft_putstr("ra");
	ft_putstr("\n");
}
