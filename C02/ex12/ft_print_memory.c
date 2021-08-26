/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:02:59 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/17 17:41:13 by anremiki         ###   ########.fr       */
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
			ft_putchar('.');
		else
			ft_putchar(str[i]);
		i++;
	}
}

void *ft_print_memory(void *addr, unsigned int size)
{

