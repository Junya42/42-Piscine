/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_col.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:10:20 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/15 20:39:23 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "skyscraper.h"

int	ft_check_col(int *tab, int pos, int i)
{
	int x;
	int y;

	x = ft_get_valuecol(pos);
	y = x + 12
	while (x < y)
	{
		if (tab[x] == i)
			return (0);
		x += 4;
	}
	return (1);
}
