/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:02:33 by akashets          #+#    #+#             */
/*   Updated: 2022/12/27 10:46:06 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	k;
	size_t	j;

	j = ft_strlen(s);
	i = 0;
	k = 0;
	while (i <= j)
	{
		if (s[i] == (char)c)
			k = i;
		i++;
	}
	if (s[k] == (char)c)
		return (((char *)s) + k);
	return (NULL);
}	
