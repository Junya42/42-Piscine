/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sky.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 21:05:48 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/15 21:12:06 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SKY_H_
# define _SKY_H_

#include <unistd.h>
#include <stdlib.h>

int	**ft_atoi(char *str, int **values);
int	ft_parsing(char *str);
int	ft_strlen(char *str);
void ft_print(int **values);
#endif
