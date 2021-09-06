/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:17:33 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/06 15:40:12 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_pushswap.h"

int	ft_space(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i][j])
	{
		if (av[i][j] != ' ')
			return (0);
		j++;
	}
	return (1);
}

int	ft_delete(char **av)
{
	int	i = 1;
	int	j = 0;

	while (av[i][j])
	{
		while (av[i][j] == ' ' || av[i][j] == '\n' || av[i][j] == '\t' ||
				av[i][j] == '\v' || av[i][j] == '\f' || av[i][j] == '\r')
			j++;
		while (av[i][j] == '-' || av[i][j] == '+')
		{
			av[i][j] = ' ';
			j++;
		}
		while (av[i][j] >= 48 && av[i][j] <= 57)
		{
			av[i][j] = ' ';
			j++;
		}
		break;
	}
	return (1);
}

int	ft_atoi2(char *str, t_param *param)
{
	int			negatif;
	long long			resultat;
	int			i;

	i = 0;
	negatif = 1;
	resultat = 0;
	param->minus = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
		{
			negatif = -1;
			param->minus = 1;
		}
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		resultat = resultat * 10 + (str[i] - '0');
		i++;
	}
	return (resultat * negatif);
}
