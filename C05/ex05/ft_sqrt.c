/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:55:02 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/17 15:36:50 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;
	int	i;

	res = 0;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (res < nb && res >= 0)
	{
		res = i * i;
		if (res == nb)
			return (i);
		i++;
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_sqrt(78136));

	return (0);
}
