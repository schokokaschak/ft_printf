/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 10:34:34 by akashets          #+#    #+#             */
/*   Updated: 2022/12/24 16:00:26 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;

	i = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(sizeof(char) * (i + 1));
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s1, (i + 1));
	ft_strlcat(new, s2, (i + 1));
	return (new);
}
