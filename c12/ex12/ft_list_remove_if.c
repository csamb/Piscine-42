/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:27:50 by csamb             #+#    #+#             */
/*   Updated: 2023/02/06 20:28:17 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
			int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*prev;
	t_list	*aftr;
	t_list	*curr;

	prev = NULL;
	aftr = *begin_list;
	while (aftr)
	{
		if (cmp(aftr->data, data_ref) == 0)
		{
			if (prev == NULL)
				*begin_list = aftr->next;
			else
				prev->next = aftr->next;
			curr = aftr;
			aftr = aftr->next;
			free_fct(curr->data);
			free(curr);
		}
		else
		{
			prev = aftr;
			aftr = prev->next;
		}
	}
}
