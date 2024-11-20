/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:01:15 by aakroud           #+#    #+#             */
/*   Updated: 2024/11/16 10:55:32 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_space(const char **str, int sign)
{
	while ((**str >= 9 && **str <= 13) || **str == 32)
		(*str)++;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign *= -1;
		(*str)++;
	}
	return (sign);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	long long		res;
	long long		tmp;

	sign = 1;
	i = 0;
	res = 0;
	tmp = 0;
	sign = ft_space(&str, sign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		if (res / 10 != tmp && sign == 1)
			return (-1);
		else if (res / 10 != tmp && sign == -1)
			return (0);
		tmp = res;
		i++;
	}
	return ((int)res * sign);
}
