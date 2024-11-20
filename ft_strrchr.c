/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:19:08 by aakroud           #+#    #+#             */
/*   Updated: 2024/10/30 09:47:29 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const	char	*s, int c)
{
	int				i;
	char			p;

	i = 0;
	p = (char)c;
	while (s[i] != '\0')
		i++;
	while (i > 0 && s[i] != p)
		i--;
	if (s[i] == p)
		return ((char *)&s[i]);
	return (NULL);
}
