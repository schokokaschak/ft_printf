/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:03:45 by akashets          #+#    #+#             */
/*   Updated: 2022/12/27 12:00:35 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	i;
	size_t	j;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	new = (char *)malloc(sizeof(char) * (j - i + 1));
	if (new)
		ft_strlcpy(new, &s1[i], j - i + 1);
	return (new);
}
// int	main() */
// { */
//     char *s1 = "  \t \t \n   \n\n\n\t"; */
//      char *ret = ft_strtrim(s1, " \n\t"); */
//  */
//     printf("Das kommt raus: %s\n", ret); */
//     return (0); */
// } */
