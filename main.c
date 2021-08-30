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

int	main(int ac, char **av)
{
	t_param param;

	if (!ft_init(ac, &param))
	{
		write(2, "Error\n", 6);
		ft_exit(&param);
		exit(1);
	}
	if (!ft_errors(av, &param))
	{
		write(2, "Error\n", 6); 
		ft_exit(&param);
		exit(1);
	}
	ft_pick(ac, &param);
	ft_exit(&param);
	return (0);
}
