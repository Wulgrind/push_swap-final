/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:24:34 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:25:49 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int	ft_init2(char **av, t_param *param)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (av[1][i])
	{
		while (av[1][i] == ' ')
			i++;
		if (av[1][i] == '-' || ft_isdigit(av[1][i]))
			j++;
		while (av[1][i] == '-' || ft_isdigit(av[1][i]))
			i++;
	}
	param->stopa = 0;
	param->stopb = 0;
	param->a = malloc(sizeof(long long *) * j);
	param->b = malloc(sizeof(long long *) * j);
	param->c = malloc(sizeof(long long *) * j);
	if (param->a == NULL || param->b == NULL)
		return (0);
	if (param->c == NULL)
		return (0);
	return (1);
}

int	ft_init1(int ac, t_param *param)
{
	int	i;

	i = 0;
	while (i < ac)
		i++;
	param->stopa = 0;
	param->stopb = 0;
	param->a = malloc(sizeof(long long *) * i);
	param->b = malloc(sizeof(long long *) * i);
	param->c = malloc(sizeof(long long *) * i);
	if (param->a == NULL)
		return (0);
	if (param->b == NULL)
		return (0);
	if (param->c == NULL)
		return (0);
	return (1);
}

int	ft_init(int ac, t_param *param, char **av)
{
	if (ft_checktype(av))
	{
		if (!ft_init1(ac, param))
			return (0);
	}
	else if (!ft_init2(av, param))
		return (0);
	return (1);
}
