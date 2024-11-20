/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:06:02 by aakroud           #+#    #+#             */
/*   Updated: 2024/11/04 16:06:04 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*help;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		new -> next = *lst;
		*lst = new;
		return ;
	}
	help = *lst;
	while (help -> next != NULL)
	{
		help = help -> next;
	}
	help -> next = new;
}
