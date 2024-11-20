/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:14:44 by aakroud           #+#    #+#             */
/*   Updated: 2024/10/30 15:47:04 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			p;

	p = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == p)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == p)
		return ((char *)&s[i]);
	return (NULL);
}
