/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:12:29 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:12:29 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_rrr(t_param *param)
{
	ft_rra(param, 1);
	ft_rrb(param, 1);
	ft_putstr("rrr");
	ft_putstr("\n");
}
