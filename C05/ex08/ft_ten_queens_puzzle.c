/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:01:06 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/23 15:10:22 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_abs(int value, int value2)
{
	if (value < 0)
		value = -value;
	if (value2 < 0)
		value2 = -value2;
	if (value == value2)
		return (0);
	return (1);
}

int	ft_check(char *res, int i)
{
	int x;
	int y;
	int a;
	int b;
	int icpy;
	
	x = 0;
	y = 0;
	icpy = i;
	if (res[i] == res[i - 1] && i >= 1)
		return (0);
	while (i >= 1)
	{
		x = i - 1;
		y = res[x];
		a = res[i] - res[x];
		b = icpy - x;
		if (!ft_abs(a, b))
			return (0);
		i--;
	}
	return (1);
}


int	ft_resolve(char	*res)
{




int	ft_ten_queens_puzzle(void)
{
	char	res[10];
	int		i;
