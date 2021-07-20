/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:56:31 by qbrillai          #+#    #+#             */
/*   Updated: 2021/01/21 16:25:17 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static int	len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char		*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = len(s);
	if ((char)c == '\0')
		return ((char *)s + slen);
	while (slen--)
	{
		if (*(s + slen) == c)
			return ((char *)(s + slen));
	}
	return (NULL);
}
