/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 18:07:41 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/04 18:38:14 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str++)
		write(1, str - 1, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i-- > 1)
		ft_putstr(argv[i]);
	return (0);
}
