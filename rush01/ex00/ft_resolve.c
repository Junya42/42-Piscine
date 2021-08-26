/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:22:39 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/15 18:23:06 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_resolve(int *tab, int pos, int *values, int total)
{
	int	x;

	x = 0;
	if (pos >= 16)
		return (1);
	if (tab[pos] != 0)
		return (ft_resolve(tab, pos + 1, values));
	while (++x < 5)
	{       
		if (!ft_check_line(tab, pos) && !ft_check_col(tab, pos))
			tab[pos] = x;
		if (ft_view(tab, pos, values, total))
		{
			if (ft_resolve(tab, pos + 1))
				return (1);
		}
	}
	tab[pos] = 0;
	return (0);
}
