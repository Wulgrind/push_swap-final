/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:22:26 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:22:27 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_rr(t_param *param)
{
	ft_ra(param, 1);
	ft_rb(param, 1);
	ft_putstr("rr");
	if (!ft_inorder(param) || param->stopb > 0)
		ft_putstr("\n");
}
