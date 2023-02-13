/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:18:51 by akashets          #+#    #+#             */
/*   Updated: 2022/12/27 13:31:40 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*new;

	if (lst == NULL)
		return (NULL);
	if (lst->next == NULL)
		return (lst);
	new = lst;
	while (new->next != NULL)
		new = new->next;
	return (new);
}
