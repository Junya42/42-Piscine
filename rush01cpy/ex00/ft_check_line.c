/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 21:32:41 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/15 21:33:13 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky.h"

int	ft_check_line(int **tab, int pos, int i)
{
	int x;
	int y;

	x = pos / 4;
	y = pos % 4;
	while (tab[x][y])
	{
		if (tab[x][y] == i)
			return (0);
		x++;
	}
	return (1);
}
