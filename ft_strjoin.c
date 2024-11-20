/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:27:38 by aakroud           #+#    #+#             */
/*   Updated: 2024/10/31 17:27:39 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char	const	*s1, char	const	*s2)
{
	size_t	l1;
	size_t	l2;
	char	*total;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	total = (char *)malloc(l1 + l2 + 1);
	if (total == NULL)
		return (NULL);
	ft_memcpy(total, s1, l1);
	ft_memcpy(&total[l1], s2, l2);
	total[l1 + l2] = '\0';
	return (total);
}
