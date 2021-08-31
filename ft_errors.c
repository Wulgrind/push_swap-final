#include "ft_pushswap.h"

int	ft_errors3(t_param *param)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (i != param->stopa)
	{
		j = 0;
		while (j < i)
		{
			if (param->a[i] == param->a[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_order(t_param *param)
{
	int	i;
	int	j;

	param->temp = malloc(sizeof(long long *) * param->stopa);
	i = param->stopa - 1;
	j = 0;
	while (i >= 0)
	{
		param->temp[j] = param->a[i];
		i--;
		j++;
	}
	i = 0;
	while (i < param->stopa)
	{
		param->a[i] = param->temp[i];
		i++;
	}
}

int	ft_check(long long check, t_param *param, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (check > 2147483647 || check < -2147483648)
		return (0);
	if (check < 0 && param->minus == 0)
		return (0);
	if (check > 0 && param->minus == 1)
		return (0);
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-' && !ft_isdigit(av[i][j + 1]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_errors2(char **av, t_param *param)
{
	int			i;
	int			i2;
	long long		check;

	i = 1;
	i2 = 0;
	while (av[i])
	{
		check = ft_atoi2(av[i], param);
		if (!ft_check(check, param, av))
			return (0);
		param->a[i2] = check;
		param->stopa++;
		i++;
		i2++;
	}
	ft_order(param);
	return (1);
}

int	ft_errors(char **av, t_param *param)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]) && av[i][j] != '-')
				return (0);
			j++;
		}
		i++;
	}
	if (!ft_errors2(av, param) || !ft_errors3(param))
		return (0);
	return (1);
}
