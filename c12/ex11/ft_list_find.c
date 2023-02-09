/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:09:12 by csamb             #+#    #+#             */
/*   Updated: 2023/02/06 20:15:12 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*last;

	last = begin_list;
	while (last)
	{
		if (cmp(last->data, data_ref) == 0)
			return (last);
		last = last->next;
	}
	return (0);
}
