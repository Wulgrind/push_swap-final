#include "ft_pushswap.h"

int	main(int ac, char **av)
{
	t_param param;

	if (!ft_init(ac, &param))
		exit(1);
	if (!ft_errors(av, &param))
	{
		ft_putstr("Error\n");
		exit(1);
	}
	ft_pick(ac, &param);

	int	j = 0;
	while (j < param.stopa)
	{
		ft_putnbr(param.a[j]);
		ft_putstr("\n");
		j++;
	}
	return (0);
}
