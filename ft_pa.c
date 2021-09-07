/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:07:32 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:07:34 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_pa(t_param *param)
{
	int	i;
	int	j;

	i = param->stopb - 1;
	j = param->stopa;
	if (param->stopb > 0)
	{
		param->a[j] = param->b[i];
		param->stopb--;
		param->stopa++;
	}
	ft_putstr("pa");
	ft_putstr("\n");
}
