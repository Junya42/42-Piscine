/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:31:08 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/04 15:31:23 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	j = 0;
	len = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[len])
		len++;
	if (size <= i)
		return (size + len);
	while (src[j] && ((j + i) < (size - 1)))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (len + i);
}
