/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:29:08 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:29:09 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sb(t_param *param, int sw)
{
	int	i;
	int	temp;

	i = param->stopb - 1;
	if (i >= 1)
	{
		temp = param->b[i];
		param->b[i] = param->b[i - 1];
		param->b[i - 1] = temp;
	}
	if (sw == 0)
		ft_putstr("sb");
	ft_putstr("\n");
}
