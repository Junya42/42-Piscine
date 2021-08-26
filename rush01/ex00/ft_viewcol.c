/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_viewcol.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:19:42 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/15 20:14:20 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	ft_viewcol(int *tab, int pos, int *values, int total)
{
	if (ft_view_column(tab, pos, values, total) &&
			ft_view_rcolumn(tab, pos, values, total))
		return (1);
	return (0);
}
