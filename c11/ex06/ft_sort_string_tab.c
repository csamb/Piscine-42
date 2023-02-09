/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:47:42 by csamb             #+#    #+#             */
/*   Updated: 2023/02/05 19:48:33 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	size_t	i;
	size_t	j;
	char	**min;

	i = 0;
	j = 1;
	while (i < j)
	{
		j = i + 1;
		min = &tab[i];
		while (tab[j])
		{
			if (ft_strcmp(*min, tab[j]) > 0)
				min = &tab[j];
			j++;
		}
		swap(&tab[i], min);
		i++;
	}
}
