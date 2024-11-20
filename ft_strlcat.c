/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:16:16 by aakroud           #+#    #+#             */
/*   Updated: 2024/11/16 10:58:37 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, const	char	*src, size_t	destsize)
{
	size_t	totalent;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dest == NULL && destsize == 0)
		return (ft_strlen(src));
	totalent = ft_strlen(src) + ft_strlen(dest);
	while (dest[i] != '\0')
		i++;
	if (destsize == 0 || ft_strlen(dest) >= destsize)
		return (ft_strlen(src) + destsize);
	while (src[j] != '\0' && i < (destsize - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (totalent);
}
