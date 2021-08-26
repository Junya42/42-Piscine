/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:01:33 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/24 19:12:38 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	new;

	new = NULL:
	new = malloc(sizeof(t_list));
	new.data = data;
	new.next = NULL;
	return (new);
}
