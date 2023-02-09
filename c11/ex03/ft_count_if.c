/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:55:28 by csamb             #+#    #+#             */
/*   Updated: 2023/01/31 20:03:12 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < length)
	{
		if ((*f)(tab[i]))
			j++;
		i++;
	}
	return (j);
}
