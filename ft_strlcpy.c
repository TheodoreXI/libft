/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:17:03 by aakroud           #+#    #+#             */
/*   Updated: 2024/10/28 14:16:50 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dest, const	char	*src, size_t	destsize)
{
	size_t	i;
	size_t	lent;

	i = 0;
	lent = 0;
	while (src[lent] != '\0')
	{
		lent++;
	}
	if (destsize == 0)
	{
		return (lent);
	}
	while (src[i] != '\0' && i < (destsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lent);
}
