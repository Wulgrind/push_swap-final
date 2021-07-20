#include "ft_pushswap.h"

int	ft_errors3(t_param *param, int ac)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (param->a[i] != param->stop -1)
	{
		j = 0;
		while (param->a[j] != param->stop -1)
		{
			if (param->a[i] == param->a[j] && i != j)
				return (0);
			j++;
		}
		ft_putnbr(param->a[i]);
		i++;
	}
	return (1);
}

int	ft_errors2(char **av, t_param *param)
{
	int			i;
	int			i2;
	long int	check;

	i = 1;
	i2 = 0;
	while (av[i])
	{
		check = ft_atoi(av[i]);
		if (check > 2147483647 || check < -2147483648)
			return (0);
		param->a[i2] = check;
		param->stop++;
		i++;
		i2++;
	}
	return (1);
}

int	ft_errors(char **av, t_param *param, int ac)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	if (!ft_errors2(av, param) || ft_errors3(param, ac))
		return (0);
	return (1);
}
