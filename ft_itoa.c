/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:04:01 by aakroud           #+#    #+#             */
/*   Updated: 2024/11/09 14:21:17 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_len(int n)
{
	int			count;
	long		p;

	p = n;
	count = 0;
	if (p == 0)
	{
		return (1);
	}
	if (p < 0)
	{
		p = -p;
		count++;
	}
	while (p > 0)
	{
		p /= 10;
		count++;
	}
	return (count);
}

static	char	*ft_change(long int y, char *s)
{
	int	i;

	i = count_len(y) - 1;
	if (y < 0)
	{
		y = -y;
		s[0] = '-';
	}
	while (y > 0)
	{
		s[i] = y % 10 + 48;
		y /= 10;
		i--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*str;
	long int	p;

	p = n;
	i = count_len(n);
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	i -= 1;
	if (p == 0)
	{
		str[0] = '0';
		return (str);
	}
	str = ft_change(p, str);
	return (str);
}
