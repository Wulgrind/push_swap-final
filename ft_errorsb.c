#include "ft_pushswap.h"

int	ft_errors3b(t_param *param)
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

int	ft_orderb(t_param *param)
{
	int	i;
	int	j;

	param->temp = malloc(sizeof(long long *) * param->stopa);
	if (param->temp == NULL)
		return (0);
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
	return (1);
}

int	ft_checkb(long long check, t_param *param, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (check > 2147483647 || check < -2147483648)
		return (0);
	if (check < 0 && param->minus == 0)
		return (0);
	if (check > 0 && param->minus == 1)
		return (0);
	while (av[i][j])
	{
		if (av[i][j] == '-' && !ft_isdigit(av[i][j + 1]))
			return (0);
		j++;
	}
	return (1);
}

int	ft_errors2b(char **av, t_param *param)
{
	int			i2;
	long long	check;

	i2 = 0;
	while (!ft_space(av))
	{
		check = ft_atoi2(av[1], param);
		ft_delete(av);
		if (!ft_checkb(check, param, av))
			return (0);
		param->a[i2] = check;
		param->stopa++;
		i2++;
	}
	ft_orderb(param);
	return (1);
}

int	ft_errorsb(char **av, t_param *param)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i][j])
	{
		if (!ft_isdigit(av[i][j]) && av[i][j] != '-' && av[i][j] != ' ')
			return (0);
		j++;
	}
	if (!ft_errors2b(av, param) || !ft_errors3b(param))
		return (0);
	return (1);
}

