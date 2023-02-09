/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:54:05 by csamb             #+#    #+#             */
/*   Updated: 2023/01/21 23:09:25 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	char			diff;
	unsigned char	*s1u;
	unsigned char	*s2u;

	s1u = (unsigned char *) s1;
	s2u = (unsigned char *) s2;
	i = 0;
	diff = 0;
	while (s1u[i] && s2u[i])
	{
		diff = s1u[i] - s2u[i];
		i++;
		if (diff != 0)
			return (diff);
	}
	diff = s1u[i] - s2u[i];
	return (diff);
}
