/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:49:02 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/19 16:19:10 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_haystack(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_size(char *str, char *charset)
{
	int	size;

	size = 0;
	while (*str)
	{
		if (!ft_haystack(*str, charset))
		{
			size++;
			while (*str && !ft_haystack(*str, charset))
				str++;
		}
		str++;
	}
	return (size);
}

void	ft_strcpy(char *res, char *memory, char *str)
{
	while (memory < str)
		*(res++) = *(memory++);
	*res = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	char	*memory;
	int		i;

	i = 0;
	res = (char **)malloc(sizeof(char *) * (ft_size(str, charset) + 1));
	if (!str && !charset)
	{
		res[0] = 0;
		return (res);
	}
	while (*str)
	{
		if (!ft_haystack(*str, charset))
		{
			memory = str;
			while (*str && !ft_haystack(*str, charset))
				str++;
			res[i] = malloc(sizeof(char) * (str - memory + 1));
			ft_strcpy(res[i++], memory, str);
		}
		str++;
	}
	res[i] = 0;
	return (res);
}
