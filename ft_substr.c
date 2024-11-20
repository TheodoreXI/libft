/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:28:36 by aakroud           #+#    #+#             */
/*   Updated: 2024/10/31 17:28:52 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_empty(void)
{
	char	*empty;

	empty = (char *)malloc(1);
	if (empty == NULL)
		return (NULL);
	empty[0] = '\0';
	return (empty);
}

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	t;
	char	*empty;
	char	*sub;

	i = 0;
	t = 0;
	if (s == NULL)
		return (NULL);
	t = ft_strlen(s);
	sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	if (start >= t)
	{
		empty = ft_empty();
		return (empty);
	}
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
