/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:27:48 by brhajji-          #+#    #+#             */
/*   Updated: 2021/08/23 16:20:13 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "calcul.h"
int	check(char op, int nb2)
{
	if (op != '+' && op != '-' && op != '/' && op != '*' && op != '%')
	{
		ft_putnbr(0);
		ft_putstr("\n");
		return (1);
	}
	if (op == '/' && nb2 == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	if (op == '%' && nb2 == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

void	init(int (**do_op)(int x, int y))
{
	do_op[0] = &plus;
	do_op[1] = &moins;
	do_op[2] = &div;
	do_op[3] = &multip;
	do_op[4] = &mod;
}

void	calcul(int nb1, char op, int nb2)
{
	int		(*do_op[5])(int x, int y);

	init(do_op);
	if (op == '+')
		ft_putnbr((*do_op[0])(nb1, nb2));
	else if (op == '-')
		ft_putnbr((*do_op[1])(nb1, nb2));
	else if (op == '/')
		ft_putnbr((*do_op[2])(nb1, nb2));
	else if (op == '*')
		ft_putnbr((*do_op[3])(nb1, nb2));
	else if (op == '%')
		ft_putnbr((*do_op[4])(nb1, nb2));
	ft_putstr("\n");
}

int	main(int ac, char **av)
{
	int		nb1;
	int		nb2;
	char	op;

	if (ac == 4)
	{
		nb1 = ft_atoi(av[1]);
		op = av[2][0];
		nb2 = ft_atoi(av[3]);
		if (!check(op, nb2))
		{
			calcul(nb1, op, nb2);
			return (0);
		}
		else
			return (1);
	}
	return (1);
}
