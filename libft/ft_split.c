/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 20:26:53 by qbrillai          #+#    #+#             */
/*   Updated: 2021/01/23 10:39:19 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numstring(char const *s1, char c)
{
	int	cpt;
	int	sw;

	cpt = 0;
	sw = 0;
	if (*s1 == '\0')
		return (0);
	while (*s1 != '\0')
	{
		if (*s1 == c)
			sw = 0;
		else if (sw == 0)
		{
			sw = 1;
			cpt++;
		}
		s1++;
	}
	return (cpt);
}

static int	numchar(char const *s2, char c, int i)
{
	int lenght;

	lenght = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		lenght++;
		i++;
	}
	return (lenght);
}

static char	**freee(char const **ret, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)ret[j]);
	}
	free(ret);
	return (NULL);
}

static char	**affect(char const *s, char **ret, char c, int wc)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < wc)
	{
		k = 0;
		while (s[i] == c)
			i++;
		ret[j] = (char *)malloc(sizeof(char) * numchar(s, c, i) + 1);
		if (ret[j] == NULL)
			return (freee((char const **)ret, j));
		while (s[i] != '\0' && s[i] != c)
			ret[j][k++] = s[i++];
		ret[j][k] = '\0';
		j++;
	}
	ret[j] = 0;
	return (ret);
}

char		**ft_split(char const *s, char c)
{
	char		**ret;
	char		wc;

	if (s == NULL)
		return (NULL);
	wc = numstring(s, c);
	ret = (char **)malloc(sizeof(char *) * (wc + 1));
	if (ret == NULL)
		return (NULL);
	return (affect(s, ret, c, wc));
}
