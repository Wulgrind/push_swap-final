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

int	main(int ac, char **av)
{
	t_param param;

	if (ac == 1)
		return (0);
	if (!ft_init(ac, &param, av))
	{
		write(2, "Error\n", 6);
		ft_exit(&param);
		exit(1);
	}
	if (ft_checktype(av))
	{
		if (!ft_errors(av, &param))
		{
			write(2, "Error\n", 6); 
			ft_exit(&param);
			exit(1);
		}
	}
	else if (!ft_errorsb(av, &param))
	{
		write(2, "Error\n", 6);
		ft_exit(&param);
		exit(1);
	}
	ft_pick(&param);
	return (0);
}
