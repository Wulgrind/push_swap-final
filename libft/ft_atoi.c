/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:17:33 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 12:04:23 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_atoi(char *str)
{
	int			negatif;
	long long	resultat;
	int			i;

	i = 0;
	negatif = 1;
	resultat = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
		{
			negatif = -1;
		}
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		resultat = resultat * 10 + (str[i] - '0');
		i++;
	}
	return (resultat * negatif);
}
