/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:09:18 by aakroud           #+#    #+#             */
/*   Updated: 2024/11/16 10:56:58 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const	void	*src, size_t	len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (len == 0 || (s == NULL && d == NULL))
		return (d);
	if (s < d)
	{
		while (len--)
			d[len] = s[len];
	}
	else if (s > d)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
