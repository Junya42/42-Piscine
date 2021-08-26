/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwillion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:45:25 by mwillion          #+#    #+#             */
/*   Updated: 2021/08/08 19:45:28 by mwillion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_atoi(char *str)
{
	int	res;

	res = 0;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res);
}

void	display(int x, int y, int xmax, int ymax)
{
	if ((y == 1 && x == xmax) && xmax != 1)
		ft_putchar('C');
	else if (x == 1 && y == 1)
		ft_putchar('A');
	else if (x == 1 && y == ymax)
		ft_putchar('C');
	else if (y == ymax && x == xmax)
		ft_putchar('A');
	else if ((x != 1 && x != xmax) && (y == 1 || y == ymax))
		ft_putchar('B');
	else if ((y != 1 && y != ymax) && (x == 1 || x == xmax))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int xmax, int ymax)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y <= ymax)
	{
		x = 1;
		while (x <= xmax)
		{
			display(x, y, xmax, ymax);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
