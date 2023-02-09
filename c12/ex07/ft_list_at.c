/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:37:36 by csamb             #+#    #+#             */
/*   Updated: 2023/02/06 18:49:23 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	count;
	t_list			*last;

	count = 0;
	last = begin_list;
	while (last)
	{
		if (count == nbr)
			return (last);
		last = last->next;
		++count;
	}
	return (0);
}
