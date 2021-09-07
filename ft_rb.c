/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:12:17 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:12:18 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_rb(t_param *param, int sw)
{
	int	temp;
	int	i;

	i = param->stopb - 1;
	temp = param->b[i];
	while (i > 0)
	{
		param->b[i] = param->b[i - 1];
		i--;
	}
	param->b[i] = temp;
	if (sw == 0)
		ft_putstr("rb");
	ft_putstr("\n");
}
