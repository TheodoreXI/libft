/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:12:25 by aakroud           #+#    #+#             */
/*   Updated: 2024/11/16 10:56:25 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t	n)
{
	size_t				i;
	unsigned char		*d1;
	unsigned const char	*s1;

	i = 0;
	d1 = (unsigned char *)dest;
	s1 = (unsigned const char *)src;
	if (dest == src)
		return (dest);
	if (d1 == NULL && s1 == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return (d1);
}
