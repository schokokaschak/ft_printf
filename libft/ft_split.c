/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:25:22 by akashets          #+#    #+#             */
/*   Updated: 2022/12/29 13:34:29 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (*s)
	{
		if (*s != c && k == 0)
		{
			k = 1;
			i++;
		}
		else if (*s == c)
			k = 0;
		s++;
	}
	return (i);
}

static char	*ft_fill(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * ((finish - start) + 1));
	while (start < finish)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		k;
	char	**new;

	new = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	j = 0;
	k = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || i == ft_strlen(s)) && k >= 0)
		{
			new[j++] = ft_fill(s, k, i);
			k = -1;
		}
		i++;
	}
	new[j] = 0;
	return (new);
}
// int	main() */
// { */
//     char *s = "Hello!"; */
//      char **result = ft_split(s, ' '); */
//  */
//     printf("1: %s\n", result[0]); */
//     printf("2: %s\n", result[1]); */
//     return (0); */
// } */
