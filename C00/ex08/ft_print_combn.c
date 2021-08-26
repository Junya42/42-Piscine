/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:19:19 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/19 13:39:21 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] < 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_resolve(int *tab, int i, int n)
{
	if (i > 0)
		tab[i] = tab[i - 1] + 1;
	while (tab[i] < 10)
	{
		if (i < n - 1)
			ft_resolve(tab, i + 1, n);
		else
			ft_print(tab, n);
		tab[i]++;
	}
}

void	ft_print_combn(int n)
{
	int tab[10];
	int	i;

	i = -1;
	while (++i < n)
		tab[i] = i;
	ft_resolve(tab, 0, n);
}
#include <stdlib.h>

int main(int ac, char **av)
{
	ft_print_combn(atoi(av[1]));
	return (0);
}
