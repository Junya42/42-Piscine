/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 21:04:56 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/15 21:10:56 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int **values)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < 4)
	{
		while (x < 4)
		{
			ft_putchar(values[y][x] + '0');
			if (x < 4 - 1)
				ft_putchar(' ');
			x++;
		}
		x = 0;
		y++;
		ft_putchar('\n');
	}
}
