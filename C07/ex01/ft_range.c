/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 18:08:25 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/17 15:09:39 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min + 1));
	if (tab == NULL)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	tab[i] = '\0';
	return (tab);
}
