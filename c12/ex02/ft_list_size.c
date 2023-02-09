/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:40:40 by csamb             #+#    #+#             */
/*   Updated: 2023/02/06 13:47:07 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		compteur;
	t_list	*dernier;

	compteur = 0;
	dernier = begin_list;
	while (dernier)
	{
		dernier = dernier->next;
		++compteur;
	}
	return (compteur);
}
