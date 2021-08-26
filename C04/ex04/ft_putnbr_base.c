/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:35:40 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/10 17:46:01 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	nb;

	nb = 0;
	while (*(str++))
		nb++;
	return (nb);
}

int	ft_print_error(char *str)
{
	int		i;
	int		i2;
	int		j;

	i = 0;
	j = ft_strlen(str);
	if (j <= 1)
		return (1);
	while (str[i])
	{
		i2 = i + 1;
		while (str[i2])
		{
			if (str[i] == str[i2])
				return (1);
			i2++;
		}
		if (str[i] == '-' || str[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	long int	l;

	l = (long int)nbr;
	i = ft_strlen(base);
	if (ft_print_error(base) == 0)
	{
		if (l < 0)
		{
			l *= -1;
			ft_putchar('-');
		}
		if (l >= i)
		{
			ft_putnbr_base(l / i, base);
			l = l % i;
			i++;
		}
		ft_putchar(base[l]);
	}
}
#include <stdlib.h>
int main(int ac, char **av)
{
	ft_putnbr_base(atoi(av[1]), av[2]);
}
