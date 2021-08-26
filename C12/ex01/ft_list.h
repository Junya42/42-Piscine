/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:58:48 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/24 19:44:47 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
t_list	*ft_create_elem(void *data);

typedef struct s_list
{
	void	*data;
	s_list	*next;
}t_list;

#endif
