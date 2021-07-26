#include "ft_pushswap.h"

int	main(int ac, char **av)
{
	int	i;
	t_param param;

	i = 0;
	while (i < ac)
	{
		i++;
	}
	param.stopa = 0;
	param.stopb = 0;
	param.a = malloc(sizeof(int *) * i);
	param.b = malloc(sizeof(int *) * i);
	if (!ft_errors(av, &param, ac))
	{
		ft_putstr("Error\n");
		exit(1);
	}
	ft_pa(&param);	
	ft_pb(&param);
	ft_pa(&param);
	ft_rra(&param);
	ft_ra(&param);
	int j = 0;
	while (j < param.stopa)
	{
		ft_putnbr(param.a[j]);
		j++;
	}
	j = 0;
	ft_putstr("\n");
	while (j < param.stopb)
	{
		ft_putnbr(param.b[j]);
		j++;
	}
}
