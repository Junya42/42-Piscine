/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:36:37 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/22 22:58:06 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print(char *str, char *res)
{
	int		len;
	char	*tmp;
	int		i;
	int		count;
	int 	power;

	i = 0;
	len = ft_strlen(res);
	tmp = malloc(sizeof(char) * 3);
	if (res[0] == '0' && res[1] == '\0')
	{
		ft_putstr(ft_litteral(str, " :", res));
		return;
	}
	while (res[i])
	{
		count = 0;
		if (len % 3 == 0 && res[i] != '0')
		{
			tmp[0] = res[i];
			tmp[1] = '\0';
			ft_putstr(ft_litteral(str, " :", tmp));
			ft_putchar(' ');
			ft_putstr(ft_litteral(str, " :", "100"));
			if (res[i + 1] != '\0')
				ft_putchar(' ');
		}
		else if (len % 3 == 2 && res[i] != '0')
		{
			if (res[i] == '1')
			{
				tmp[0] = res[i];
				tmp[1] = res[i + 1];
				tmp[2] = '\0';
				ft_putstr(ft_litteral(str, " :", tmp));
				count++;
				i++;
			}
			else
			{
				tmp[0] = res[i];
				tmp[1] = '0';
				tmp[2] = '\0';
				ft_putstr(ft_litteral(str, " :", tmp));
			}
			if (res[i + 1] != '0')
				ft_putchar(' ');
		}
		else if ((len % 3 == 1 && res[i] != 0) && count == 0)
		{
			tmp[0] = res[i];
			tmp[1] = '\0';
			if (res[i] != '0')
				ft_putstr(ft_litteral(str, " :", tmp));
			if (len > 1)
				ft_putchar(' ');
		}
		if (len % 3 == 1 && len > 3)
		{
			power = len - 1;
			ft_putstr(ft_litteral(str, " :", ft_itoa(ft_iterative_power(10, power))));
			ft_putchar(' ');
		}
		i++;
		len--;
	}
	ft_putchar('\n');
	free(tmp);
	free(res);
}
