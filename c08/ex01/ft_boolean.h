/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 06:33:07 by csamb             #+#    #+#             */
/*   Updated: 2023/01/27 06:53:07 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define EVEN even
# define SUCCESS 0
# define TRUE 0
# define FALSE 1
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN_MSG "I have an even number of arguments.\n"

int	even(int nbr)
{
	nbr = nbr % 2;
	if (nbr == 1)
		return (0);
	else
		return (1);
}
typedef int	t_bool;
#endif
