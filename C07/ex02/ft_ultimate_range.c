/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 18:15:53 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/17 15:07:23 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	len;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	tab = malloc(sizeof(*tab) * len);
	if (tab == NULL)
		return (-1);
	while (i < len)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (len);
}
