/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:41:34 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/15 21:20:58 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky.h"

int main(int argc, char **argv)
{
	int **tab;
	int **values;

	tab = malloc(sizeof(int *) * 4);
	values = malloc(sizeof(int *) * 4);
	if ((argc != 2 || ft_strlen(argv[1]) != 31) || !ft_parsing(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	values = ft_atoi(argv[1], values);
	ft_print(values);
	return (0);
}
