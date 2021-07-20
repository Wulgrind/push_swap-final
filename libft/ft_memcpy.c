/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:14:01 by qbrillai          #+#    #+#             */
/*   Updated: 2021/01/21 12:04:18 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s2;
	char	*s1;
	size_t	i;

	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	if (!n || dst == src)
		return (dst);
	while (i < n)
	{
		*s1++ = *s2++;
		i++;
	}
	return (dst);
}
