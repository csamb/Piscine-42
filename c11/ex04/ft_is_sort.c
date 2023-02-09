/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:27:39 by csamb             #+#    #+#             */
/*   Updated: 2023/02/02 17:29:03 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	dir;
	int	diff;

	dir = 0;
	i = 0;
	while (i < length - 1)
	{
		diff = f(tab[i], tab[i + 1]);
		if (diff > 0 && dir == 0)
			dir = 1;
		else if (diff < 0 && dir == 0)
			dir = -1;
		if (dir == 1 && diff < 0)
			return (0);
		else if (dir == -1 && diff > 0)
			return (0);
		++i;
	}
	return (1);
}
