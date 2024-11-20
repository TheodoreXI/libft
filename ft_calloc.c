/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:05:16 by aakroud           #+#    #+#             */
/*   Updated: 2024/10/24 18:08:41 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	size_t			tmp;
	unsigned char	*p;

	tmp = count * size;
	if (count != 0 && size != 0 && tmp / count != size)
		return (NULL);
	p = (unsigned char *)malloc(count * size);
	i = 0;
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < (count * size))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
