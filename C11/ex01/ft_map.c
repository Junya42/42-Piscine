/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:08:11 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/25 18:45:44 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int(*f)(int))
{
	int	*cpy;
	int	i;

	i = 0;
	cpy = malloc(sizeof(int) * lenght);
	while (i < lenght)
	{
		cpy[i] = f(tab[i]);
		i++;
	}
	return (cpy);
}
