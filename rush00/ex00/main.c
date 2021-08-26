/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:57:53 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/08 20:02:16 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(int x, int y, int xmax, int ymax);
void	rush(int xmax, int ymax);
void	ft_putchar(char c);
int		ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc == 1)
		rush(5, 5);
	else if (argc == 3)
	{
		if (ft_atoi(argv[1]) <= 0 || ft_atoi(argv[2]) <= 0)
			return (0);
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	else
		return (0);
}
