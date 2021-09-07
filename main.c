/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:13:24 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 10:31:11 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_exit2(t_param *param)
{
	free (param->temp);
}

void	ft_exit(t_param *param)
{
	free(param->a);
	free(param->b);
	free(param->c);
	ft_exit2(param);
}

int	ft_checktype(char **av)
{
	int	i;

	i = 0;
	while (av[1][i])
	{
		if (av[1][i] == ' ')
			return (0);
		i++;
	}
	return (1);
}

int	main2(char **av, t_param *param)
{
	if (ft_checktype(av))
	{
		if (!ft_errors(av, param))
		{
			return (0);
		}
	}
	else if (!ft_errorsb(av, param))
	{
		return (0);
	}
	ft_pick(param);
	return (1);
}

int	main(int ac, char **av)
{
	t_param	param;

	if (ac == 1)
		return (0);
	if (!ft_init(ac, &param, av))
	{
		write(2, "Error\n", 6);
		ft_exit(&param);
		exit(1);
	}
	if (!main2(av, &param))
	{
		write(2, "Error\n", 6);
		ft_exit(&param);
		exit(1);
	}
	return (0);
}
