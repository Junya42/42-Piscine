/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:34:56 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/11 15:39:18 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexadecimal(unsigned char c)
{
	char			*base_hexa;

	base_hexa = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base_hexa[c / 16]);
	ft_putchar(base_hexa[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			ft_hexadecimal(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	ft_putstr_non_printable(argv[argc - 1]);
	return (0);
}
