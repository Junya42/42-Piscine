/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 18:53:04 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/21 19:41:26 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_nextlvlstrcat(char *tab, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			tab[k] = strs[i][j++];
			k++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			tab[k] = sep[j];
			j++;
			k++;
		}
		i++;
	}
	tab[k] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			k++;
		}
		j = 0;
		while (sep[j])
		{
			j++;
			k++;
		}
		i++;
	}
	tab = malloc(sizeof(char) * (k + 1));
	return (ft_nextlvlstrcat(tab, size, strs, sep));
}

#include <stdio.h>

int main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc, argv, "."));
	return (0);
}
