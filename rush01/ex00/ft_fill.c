/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 09:57:24 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/15 13:28:37 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_x(int i, int x)
{
	if (i < 4)
		x = i;
	else if (i < 8 && i >= 4)
		x = i - 4;
	else if (i < 12 && i >= 8)
		x = 0;
	else if (i >= 12)
		x = 3;
	return (x);
}

int	ft_y(int i, int y)
{
	if (i < 4)
		y = 0;
	else if (i < 8 && i >= 4)
		y = 3;
	else if (i < 12 && i >= 8)
		y = i - 8;
	else if (i >= 12)
		y = i - 12;
	return (y);
}

int	ft_j(int i, int j)
{
	if (i < 4)
		j = 4 + i;
	else if (i < 8 && i >= 4)
		j = i - 4;
	else if (i < 12 && i >= 8)
		j = i + 4;
	else if (i >= 12)
		j = i - 4;
	return (j);
}

int	*ft_fill(int *p, int *p2)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	while (i < 16)
	{
		x = ft_x(i, x);
		y = ft_y(i, y);
		j = ft_j(i, j);
		if (p2[i] == 1)
			p[x + (y * 4)] = 4;
		else if (p2[i] == 2)
		{
			if (p2[j] == 1)
				p[x + (y * 4)] = 3;
			//if (p2[j] == 3)
				//p[x + (y * 4)] = 4;
		}
		else if (p2[i] == 3)
		{
			i++;
			continue ;
		}
		else if (p2[i] == 4)
		{
			p[x + (y * 4)] = 1;
		}
		else
			return (0);
		i++;
	}
	return (p);
}
