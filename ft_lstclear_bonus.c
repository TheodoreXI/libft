/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:06:18 by aakroud           #+#    #+#             */
/*   Updated: 2024/11/04 16:06:20 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*help;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		help = *lst;
		*lst = (*lst)-> next;
		ft_lstdelone(help, del);
	}
	*lst = NULL;
}
