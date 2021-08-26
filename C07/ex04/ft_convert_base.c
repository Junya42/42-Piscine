/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:44:55 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/25 15:12:37 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		ft_check_char(char c, char *base);
int		ft_strlen(char *str);
int		ft_isspace(char c);

int	ft_check_base(char *base)
{
	int				i;
	int				j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (ft_isspace(base[i]))
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_getsize(int nb, char *base)
{
	int		i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb)
	{
		nb = nb / ft_strlen(base);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nb, char *izard, char *base, int *index)
{
	int		size;
	long int n;

	n =  nb;
	size = ft_strlen(base);
	if (nb == -2147483648)
	{
		izard[0] = '-';
		(*index)++;
		ft_putnbr_base((-(long int)nb) / size, izard, base, index);
		ft_putnbr_base((-(long int)nb) % size, izard, base, index);
	}
	else if (nb < 0)
	{
		izard[0] = '-';
		(*index)++;
		ft_putnbr_base(-nb, izard, base, index);
	}
	else if (nb < size)
		izard[(*index)++] = base[nb];
	else
	{
		ft_putnbr_base(nb / size, izard, base, index);
		ft_putnbr_base((nb) % size, izard, base, index);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*izard;
	int		nb;
	int		index;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	izard = NULL;
	izard = malloc(sizeof(char) * (ft_getsize(nb, base_to) + 1));
	if (izard == NULL)
		return (NULL);
	index = 0;
	ft_putnbr_base(nb, izard, base_to, &index);
	izard[ft_getsize(nb, base_to)] = '\0';
	return (izard);
}

#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_convert_base(av[1], av[2], av[3]));
	return (0);
}
