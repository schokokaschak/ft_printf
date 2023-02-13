/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akashets <akashets@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:01:42 by akashets          #+#    #+#             */
/*   Updated: 2023/01/03 10:49:05 by akashets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"printf.h"
#include	"libft.h"
#include	<stdint.h>

int	ft_hexlen(long n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

void	ft_printhex(long long n, char format)
{
	if (n >= 16)
	{
		ft_printhex(n / 16, format);
		ft_printhex(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd(n + '0', 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((n - 10 + 'A'), 1);
		}
	}
}

int	ft_puthex(unsigned long n, char format)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		ft_printhex(n, format);
	return (ft_hexlen(n));
}
