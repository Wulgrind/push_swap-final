#include "ft_pushswap.h"

void	ft_sortb(t_param *param)
{
	int	i;
	int	j;

	i = 0;
	while (i < param->stopa)
	{
		j = 0;
		while (j < param->stopa)
		{
			if (param->a[i] == param->c[j])
			{
				param->a[i] = j;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort(t_param *param)
{
	int	i;
	int 	temp;	

	i = 0;
	while (i < param->stopa)
	{
		param->c[i] = param->a[i];
		i++;
	}
	i = 0;
	while (i < param->stopa - 1)
	{
		if (param->c[i] > param->c[i + 1])
		{
			temp = param->c[i + 1];
			param->c[i + 1] = param->c[i];
			param->c[i] = temp;
			i = -1;
		}
		i++;
	}
	ft_sortb(param);
}

int	ft_convertb(int number)
{
	int	remainder;
	int	binary;
	int	place;
	int	nb;

	binary = 0;
	place = 1;
	nb = number;
	while (nb > 0)
	{
		remainder = nb % 2;
		binary += remainder * place;
		place *= 10;
		nb /= 2;
	}
	return (binary);
}

void	ft_convert(t_param *param)
{
	int	i;
	
	i = 0;
	while (i < param->stopa)
	{
		param->a[i] = ft_convertb(param->a[i]);
		i++;
	}	
}

void	ft_big(t_param *param)
{
	ft_sort(param);
	ft_convert(param);
}
