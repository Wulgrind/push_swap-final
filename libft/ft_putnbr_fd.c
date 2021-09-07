/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:58:46 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 12:17:45 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static void	pchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		pchar('-', fd);
		nb = (unsigned int)(n * -1);
	}
	else
		nb = (unsigned int)n;
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	pchar((char)(nb % 10 + 48), fd);
}
