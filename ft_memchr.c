/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:11:48 by aakroud           #+#    #+#             */
/*   Updated: 2024/10/24 18:25:51 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*p;

	i = 0;
	p = (const unsigned char *)s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return ((unsigned char *)&p[i]);
		}
		i++;
	}
	return (NULL);
}
