/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:28:14 by aakroud           #+#    #+#             */
/*   Updated: 2024/11/10 11:25:39 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char	const	*s1, char	const	*set)
{
	int		i;
	char	*str;
	int		start;
	int		end;

	i = 0;
	start = 0;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	str = (char *)malloc(end - start + 1);
	if (str == NULL)
		return (NULL);
	while (end > start)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
