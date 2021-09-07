/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:08:28 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:08:33 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_rrb(t_param *param, int sw)
{
	int	temp;
	int	i;

	i = 0;
	temp = param->b[i];
	while (i < param->stopb - 1)
	{
		param->b[i] = param->b[i + 1];
		i++;
	}
	param->b[i] = temp;
	if (sw == 0)
		ft_putstr("rrb");
	if (!ft_inorder(param) || param->stopb > 0)
		ft_putstr("\n");
}
