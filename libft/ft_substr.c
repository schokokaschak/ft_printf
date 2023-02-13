/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 10:04:07 by akashets          #+#    #+#             */
/*   Updated: 2022/12/28 14:49:34 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static char	*ft_start(void)
{
	char	*rtv;

	rtv = malloc(sizeof(char));
	if (rtv == NULL)
		return (NULL);
	rtv[0] = '\0';
	return (rtv);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	k;
	char			*str;

	if (ft_strlen(s) < start)
		return (ft_start());
	if (len < ft_strlen(s + start))
		str = (char *)malloc(sizeof(char) * (len + 1));
	else
		str = (char *)malloc(sizeof(char) * (ft_strlen(s + start) + 1));
	if (str == NULL)
		return (NULL);
	k = 0;
	while (s[k] != '\0' && k < start)
		k++;
	i = 0;
	while (s[k] != '\0' && i < len)
	{
		str[i] = s[k];
		i++;
		k++;
	}
	str[i] = '\0';
	return (str);
}
