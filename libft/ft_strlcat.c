/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:33:52 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 12:06:49 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static int	len(const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	j = 0;
	i = len(dst);
	k = len(src);
	if (dstsize == 0)
		return (k);
	while ((src[j] != '\0') && ((i + j) < (dstsize - 1)))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	if (dstsize > i)
		return (i + k);
	return (dstsize + k);
}
