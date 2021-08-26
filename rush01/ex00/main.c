/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 09:54:53 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/15 13:29:15 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

void	ft_strtab(int *p);
int		*ft_fill(int *p, int *p2);

int	main(int argc, char **argv)
{
	int	i;
	int	*p;
	int	*p2;

	p = (int *)malloc (sizeof (int [16]));
	p2 = (int *)malloc (sizeof (int [16]));
	if (argc != 2)
		return (0);
	else
	{
		i = 0;
		while (i < 16)
		{
			p[i] = 0;
			p2[i] = argv[1][i * 2] - '0';
			i++;
		}
	}
	i = 0;
	p = ft_fill(p, p2);
	ft_strtab(p);
	free(p);
	free(p2);
	return (0);
}
