/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsbur      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:41:49 by akashets          #+#    #+#             */
/*   Updated: 2022/12/26 12:53:38 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	ft_count(long int n)
{
	long	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	i;
	char	*str;
	int		l;

	i = n;
	l = ft_count(i);
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	if (i == 0)
		str[0] = '0';
	str[l--] = '\0';
	if (i < 0)
	{
		str[0] = '-';
		i = i * -1;
	}
	while (i > 0)
	{
		str[l] = i % 10 + '0';
		l--;
		i = i / 10;
	}
	return (str);
}
