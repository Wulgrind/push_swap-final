/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 10:43:17 by qbrillai          #+#    #+#             */
/*   Updated: 2021/01/25 11:59:42 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	s1 = (char *)dst;
	s2 = (char *)src;
	i = -1;
	if (s1 > s2)
	{
		while (len > 0)
		{
			s1[len - 1] = s2[len - 1];
			len--;
		}
	}
	else
	{
		while (++i < len)
		{
			s1[i] = s2[i];
		}
	}
	return (dst);
}
