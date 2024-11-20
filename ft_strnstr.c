/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:18:33 by aakroud           #+#    #+#             */
/*   Updated: 2024/11/16 11:10:11 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
	{
		return ((char *)&haystack[i]);
	}
	if (len == 0)
		return (NULL);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0'
			&& needle[j] == haystack[i + j]
			&& (j + i) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
