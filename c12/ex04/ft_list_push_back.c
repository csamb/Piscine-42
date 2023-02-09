/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:32:43 by csamb             #+#    #+#             */
/*   Updated: 2023/02/06 14:42:08 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last;

	last = *begin_list;
	if (!last)
		*begin_list = ft_create_elem(data);
	else
	{
		while (last)
		{
			if (!(last->next))
			{
				last->next = ft_create_elem(data);
				last = (0);
			}
			else
				last = last->next;
		}
	}
}
