/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:16:20 by akashets          #+#    #+#             */
/*   Updated: 2022/12/29 13:50:35 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*list_old;
	t_list	*list_new;

	if (lst == NULL)
		return (NULL);
	list = lst;
	list_old = NULL;
	while (list != NULL)
	{
		list_new = ft_lstnew(f(list->content));
		if (list_new == NULL)
		{
			ft_lstclear(&list_old, del);
			return (NULL);
		}
		ft_lstadd_back(&list_old, list_new);
		list = list->next;
	}
	list_new = NULL;
	return (list_old);
}
