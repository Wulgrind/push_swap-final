#include "ft_pushswap.h"

int	ft_init(int ac, t_param *param)
{
	int 	i;

	i = 0;
	while (i < ac)
		i++;
	param->stopa = 0;
	param->stopb = 0;
	param->a = malloc(sizeof(int *) * i);
	param->b = malloc(sizeof(int *) * i);
	param->c = malloc(sizeof(int *) * i);
	if (param->a == NULL)
		return (0);
	if (param->b == NULL)
		return (0);
	if (param->c == NULL)
		return (0);
	return (1);
}
