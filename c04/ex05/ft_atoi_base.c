/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:54:36 by csamb             #+#    #+#             */
/*   Updated: 2023/02/05 23:56:30 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	is_good_base(char *base)
{
	int	i;
	int	j;
	int	b;

	b = ft_strlen(base);
	if (b <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (j++ < b)
		{
			if (base[i] == base[j])
				return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_rec(unsigned int nb, char *base, unsigned int size)
{
	if (nb == 0)
		return ;
	ft_putnbr_rec(nb / size, base, size);
	ft_putchar(base[nb % size]);
}

void	ft_putnbr_base(int nb, char *base)
{
	unsigned int	b;

	b = ft_strlen(base);
	if (is_good_base(base))
	{
		if (nb == 0)
			return (ft_putchar(base[0]));
		else if (nb < 0)
		{
			write (1, "-", 1);
			ft_putnbr_rec((unsigned int)(-nb), base, b);
		}
		else
		{
			ft_putnbr_rec((unsigned int)(nb), base, b);
		}
	}
	return ;
}
