/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:33:15 by csamb             #+#    #+#             */
/*   Updated: 2023/02/06 20:34:28 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*last;

	last = *begin_list1;
	while (last)
	{
		if (!(last->next))
		{
			last->next = begin_list2;
			break ;
		}
		last = last->next;
	}
	if (!(last))
		*begin_list1 = begin_list2;
}
