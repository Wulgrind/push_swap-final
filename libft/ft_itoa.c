/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 10:12:22 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 12:20:35 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static int	lenght(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

void	writer(long *nb, int *i, char **str)
{
	*str[(*i)--] = 48 + ((*nb) % 10);
	(*nb) = (*nb) / 10;
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;

	nb = n;
	i = lenght(nb);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	if (nb == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		writer (&nb, &i, &str);
	}
	return (str);
}
