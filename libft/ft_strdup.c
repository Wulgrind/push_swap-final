/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 13:08:38 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 12:05:34 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	str = malloc(sizeof(*str) * (i + 1));
	if (str == NULL)
		return (NULL);
	while (s1[j])
	{
		str[j] = s1[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
