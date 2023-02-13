/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsbur      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:26:28 by akashets          #+#    #+#             */
/*   Updated: 2022/12/26 11:21:36 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// int main()  */
//  {  */
//     char str1[] = "hello"; */
//     char str2[] = "helloworld"; */
//     int size; */
//  */
//     size = 0; */
//     int result = ft_strncmp(str1,str2, size); */
//     printf("mine : %d\n", result); */
//     printf("string.h : %d\n", strncmp(str1, str2, size)); */
//     return (0); */
// } */
