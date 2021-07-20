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
	param.a = malloc(sizeof(int *) * i);
	if (!ft_errors(av, &param, ac))
	{
		ft_putstr("Error\n");
		exit(1);
	}
}
