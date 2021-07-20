/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:52:25 by qbrillai          #+#    #+#             */
/*   Updated: 2021/01/25 11:00:21 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*str;
	size_t		i;
	size_t		total;

	i = 0;
	total = count * size;
	if (!(str = malloc(total)))
		return (NULL);
	while (total--)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
