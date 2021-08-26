/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:59:40 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/15 21:23:54 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky.h"

int **ft_atoi(char *str, int **values)
{
	int i;
	int j;
	int x;

	i = 0;
	x = 0;
	while (values[i][j])
	{
		j = 0;
		while (values[i][j])
		{
			if (str[x] != 32)
				values[i][j] = str[x] - 48;
			x++;
			j++;
		}
		i++;
	}
	return (values);
}
