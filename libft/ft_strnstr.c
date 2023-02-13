/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:15:02 by akashets          #+#    #+#             */
/*   Updated: 2022/12/26 12:56:17 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		k = 0;
		while (haystack[i + k] == needle[k] && haystack[i] != '\0'
			&& i + k < len)
		{
			if (needle[++k] == '\0')
				return ((char *)haystack + i);
		}
	i++;
	}
	return (NULL);
}
// int	main() */
// { */
//     char haystack[] = "MZIRIBMZIRIBMZE123"; */
//     char needle[] = "MZIRIBMZE"; */
//     size_t len; */
//  */
//     len = strlen(needle); */
//     printf("Meine Funktion: %s\n", ft_strnstr(haystack, needle, len)); */
//     printf("Richtige Funktion: %s\n", strnstr(haystack, needle, len)); */
//     return(0); */
// } */
//  */
