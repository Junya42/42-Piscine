/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:13:08 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/22 21:50:39 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_error(int i)
{
	if (i == 0)
		ft_put("Error\n");
	else
		ft_put("Dict Error\n");
}