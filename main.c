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
	ft_pick(ac, &param);

	int	j = 0;
	while (param.a[j])
	{
		ft_putnbr(param.a[j]);
		ft_putstr("\n");
		j++;
	}
	return (0);
}
