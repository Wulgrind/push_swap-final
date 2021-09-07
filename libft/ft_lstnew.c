/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 10:48:33 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/07 12:18:13 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelem;

	newelem = malloc(sizeof(t_list));
	if (newelem == NULL)
		return (NULL);
	newelem->content = content;
	newelem->next = NULL;
	return (newelem);
}
