/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:30:10 by akashets          #+#    #+#             */
/*   Updated: 2022/12/29 14:30:04 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	if ((ft_strlen(dst)) + 1 > dstsize)
		return (dstsize + ft_strlen(src));
	k = 0;
	while (dst[k] != '\0')
		k++;
	j = ft_strlen(dst);
	while (src[i] != '\0' && k + 1 < dstsize)
	{
		dst[k] = src[i];
		i++;
		k++;
	}
	dst[k] = '\0';
	return (j + ft_strlen(src));
}
//      int    main(void) */
//  { */
//      char dst[25] = "Hello"; */
//      char dst2[25] = "Hello"; */
//      const char src[20] = "tesasdadtsdasdstring"; */
//      int size = 0; */
//      printf("mine : %zu\n", ft_strlcat(dst, src, size)); */
//    printf("%s\n", dst); */
//      printf("string.h : %zu\n", strlcat(dst2, src, size)); */
//     printf("%s\n", dst2); */
//     return (0); */
// } */
//  */
