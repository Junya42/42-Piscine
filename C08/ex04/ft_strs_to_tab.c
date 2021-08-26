/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:31:39 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/25 19:07:24 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*cpy;

	i = -1;
	cpy = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (cpy == NULL)
		return (NULL);
	while (str[++i])
		cpy[i] = str[i];
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	i = 0;
	stock = malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock == NULL)
		return (NULL);
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
