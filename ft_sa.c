/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:22:37 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:22:38 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sa(t_param *param, int sw)
{
	int	i;
	int	temp;

	i = param->stopa - 1;
	if (i >= 1)
	{
		temp = param->a[i];
		param->a[i] = param->a[i - 1];
		param->a[i - 1] = temp;
	}
	if (sw == 0)
		ft_putstr("sa");
	ft_putstr("\n");
}
