/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <aakroud@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:06:59 by aakroud           #+#    #+#             */
/*   Updated: 2024/11/04 16:07:00 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;
	t_list	*new_node;

	head = NULL;
	current = NULL;
	if (lst == NULL || del == NULL || f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst -> content));
		if (new_node == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		if (head == NULL)
			head = new_node;
		else
			current -> next = new_node;
		current = new_node;
		lst = lst -> next;
	}
	return (head);
}
