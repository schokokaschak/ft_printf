/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printui.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:44:06 by akashets          #+#    #+#             */
/*   Updated: 2023/01/02 13:43:54 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

static int	ft_count(long int n)
{
	long	i;

	i = 0;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_uitoa(long long n)
{
	long long	i;
	int			l;
	char		*s;

	i = n;
	l = ft_count(i);
	s = (char *)malloc(sizeof(char) * (l + 1));
	if (s == NULL)
		return (NULL);
	if (i == 0)
		s[0] = '0';
	s[l--] = '\0';
	while (i > 0)
	{
		s[l] = i % 10 + '0';
		l--;
		i = i / 10;
	}
	return (s);
}

int	ft_putnumber_u(long long n)
{
	int		i;
	char	*s;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	i = 0;
	s = ft_uitoa(n);
	i = ft_putstring_n(s);
	free(s);
	return (i);
}
