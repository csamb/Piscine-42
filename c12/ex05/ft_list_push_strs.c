/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:29:56 by csamb             #+#    #+#             */
/*   Updated: 2023/02/06 17:30:04 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*first;

	first = ft_create_elem(data);
	if (!first)
		return ;
	first->next = *begin_list;
	*begin_list = first;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*current;

	i = 0;
	current = 0;
	while (i < size)
		ft_list_push_front(&current, strs[i++]);
	return (current);
}
