/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:34:49 by csamb             #+#    #+#             */
/*   Updated: 2023/01/31 19:39:30 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*nbrs;

	nbrs = malloc(sizeof(int) * (length));
	if (!nbrs)
		return (NULL);
	i = 0;
	while (i < length)
	{
		nbrs[i] = (*f)(tab[i]);
		i++;
	}
	return (nbrs);
}
