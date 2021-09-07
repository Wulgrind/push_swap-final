/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:33:22 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 12:08:23 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	len(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	str = NULL;
	if (s && f)
	{
		str = malloc(sizeof(char) * len((char *)s) + 1);
		if (str == NULL)
			return (NULL);
		while (i < len((char *)s))
		{
			str[i] = f(i, s[i]);
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
