/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:25:48 by csamb             #+#    #+#             */
/*   Updated: 2023/02/05 17:44:30 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	do_op(int num1, int num2, char *op)
{
	if (op[1] != 0)
		return (0);
	else if (*op == '+')
		return (num1 + num2);
	else if (*op == '-')
		return (num1 - num2);
	else if (*op == '/')
		return (num1 / num2);
	else if (*op == '*')
		return (num1 * num2);
	else if (*op == '%')
		return (num1 % num2);
	return (0);
}

void	ft_putnbr(int nb)
{
	long	lnb;
	char	temp;

	lnb = nb;
	if (lnb < 0)
	{
		lnb *= -1;
		write(1, "-", 1);
	}
	if (lnb > 9)
		ft_putnbr(lnb / 10);
	temp = '0' + (char)(lnb % 10);
	write(1, &temp, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	n;

	i = 0;
	n = 0;
	s = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	if (s % 2)
		return (-n);
	return (n);
}

int	main(int argc, char **argv)
{
	int		num1;
	int		num2;
	char	op;

	if (argc != 4)
		return (0);
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	op = argv[2][0];
	if (argv[2][1] == 0 && op == '/' && num2 == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (argv[2][1] == 0 && op == '%' && num2 == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(do_op(num1, num2, argv[2]));
	write(1, "\n", 1);
	return (0);
}
