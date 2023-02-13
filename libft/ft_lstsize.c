/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:42:02 by akashets          #+#    #+#             */
/*   Updated: 2022/12/27 14:35:09 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*new;

	new = lst;
	i = 1;
	if (lst == NULL)
		return (0);
	while (new->next != NULL)
	{
		new = new->next;
		i++;
	}
	return (i);
}
