/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:06:37 by aakroud           #+#    #+#             */
/*   Updated: 2024/11/04 16:06:39 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*help;

	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		help = lst -> next;
		f(lst -> content);
		lst = help;
	}
}
