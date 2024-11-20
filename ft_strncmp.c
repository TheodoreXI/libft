/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:18:07 by aakroud           #+#    #+#             */
/*   Updated: 2024/10/30 16:54:02 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*f1;
	unsigned char	*f2;

	f1 = (unsigned char *)s1;
	f2 = (unsigned char *)s2;
	i = 0;
	while (i < n && f1[i] != '\0')
	{
		if (f1[i] != f2[i])
			return (f1[i] - f2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (f1[i] - f2[i]);
}
